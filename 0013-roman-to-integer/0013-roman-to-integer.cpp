class Solution {
public:
    int romanToInt(string s)
    {
        std::map<char, int> dict;
        int i = 0;
        int res = 0;
    
        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D'] = 500;
        dict['M'] = 1000;
    
        while(i < s.size())
        {
            if (dict[s[i]] < dict[s[i + 1]])
                res -= dict[s[i]];
            else
                res += dict[s[i]];
            i++;
        }
        return res;
    }
};