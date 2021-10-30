/**  PROBLEM LINK : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
  */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = nums.size();
        int l = 0;
        int h = s-1;
        int mid = 0;
        while(l <= h)
        {
            mid = l + (h - l)/2;
            if(nums[mid] <= nums[h])
            {
                l = mid + 1;
            }
            else 
            {
                h = mid ;
            }
        }
        return nums[mid];
    }
};
