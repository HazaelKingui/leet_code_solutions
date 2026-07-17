class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j;
        vector<int> res;
        while(i < nums.size())
        {
            j = i + 1;
            while(j < nums.size())
            {
                if (nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
                j++;
            }
            i++;
        }
        return res;
    }
};