#include <algorithm>

class Solution {
public:
    bool isValid(string s) {
        int i = 0;
        std::vector <char> seq;

        while (s[i])
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                seq.push_back(s[i]);
            else if ((s[i] == ')' || s[i] == ']' || s[i] == '}'))
            {
                if (seq.empty())
                    return false;
                if (s[i] == ')' && seq.back() == '('
                    || s[i] == ']' && seq.back() == '['
                    || s[i] == '}' && seq.back() == '{')
                    {seq.pop_back();}
                else
                    return false;
            }
            i++;
        }
        return seq.empty();
    }
};