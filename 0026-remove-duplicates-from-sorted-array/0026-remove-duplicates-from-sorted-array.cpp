class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j;

        while(i < nums.size())
        {
            j = i + 1;
            while(j < nums.size())
            {
                if (nums[i] == nums[j])
                {
                    nums.erase(nums.begin() + i);
                    continue;
                }
                j++;
            }
            i++;
        }
        return (nums.size());
    }
};