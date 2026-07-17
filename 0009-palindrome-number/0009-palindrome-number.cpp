#include <algorithm>
class Solution {
public:
    bool isPalindrome(int x) {
        std::string res = std::to_string(x);
        std::string rev = res;
        reverse(rev.begin(), rev.end());
        if (res == rev)
            return true;
        return false;
    }
};