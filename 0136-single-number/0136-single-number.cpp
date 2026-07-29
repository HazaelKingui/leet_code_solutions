class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 1;
        int res;

        if (nums.size() == 1)
            return nums[0];
        res = nums[0];
        while (i < nums.size())
        {
            res = nums[i] ^ res;
            i++;
        }
        return res;
    }
};