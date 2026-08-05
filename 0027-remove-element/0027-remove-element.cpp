class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        int res = 0;

        while(i < nums.size())
        {
            j = i;
            while (j < nums.size())
            {
                if (nums[j] == val)
                {
                    nums.erase(nums.begin() + j);
                    continue ;
                }
                j++;
            }
            i++;
        }
        return nums.size();
    }
};