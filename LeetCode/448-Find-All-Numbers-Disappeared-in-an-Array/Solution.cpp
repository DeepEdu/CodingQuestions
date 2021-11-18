/** PROBLEM LINK :: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            int m = nums[i] - 1; // for zero base indexed 
            if(nums[m] > 0)
            {
                nums[m] = 0 - nums[m];
            }
        }
        vector<int> v;
        for(int i = 0; i <nums.size(); i++)
        {
            if(nums[i] > 0) v.push_back(i+1);
        }
        return v;
    }
};
