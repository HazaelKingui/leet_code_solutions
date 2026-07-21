class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        int j = 0;
        std::string res = strs[0];
        std::string pp;
        
        while (i < strs.size() - 1)
        {
            std::string next = strs[i + 1];
            j = 0;
            pp = "";
            while (j < res.size() && j < next.size())
            {
                if (res[j] != next[j])
                    break;
                pp.push_back(res[j]);
                j++;
            }
            res = pp;
            i++;
        }
        return res;
    }
};