/**  PROBLEM LINK : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
  */


class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        int mid = 0;
        while(l < h)
        {
            mid = l + (h - l)/2;
            if(nums[mid] < nums[h])
            {
                h = mid;
            }
            else if(nums[mid] > nums[h])
            {
                l = mid + 1;
            }
            // if value at high and mid are same decrement high with 1
            else if(nums[mid] == nums[h] )
            {
                h = h - 1;
            }
        }
        return nums[l];
    }
};
