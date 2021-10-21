/**  PROBLEM LINK : https://leetcode.com/problems/search-in-rotated-sorted-array/
  */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        int mid = 0;
        while(l <= h)
        {
            mid = l + (h-l)/2;
            //if the mid element is equal to target return mid
            if(nums[mid] == target)
            {
                return mid;
            }
            // finding which side of the array is sorted  
            if(nums[mid] >= nums[l])
            {
                // check if the element lies on the left half or not
                if(target >= nums[l] && target <= nums[mid] )
                {
                    h = mid -1;
                }
                else
                    l = mid+1;
            }
            else
            {
                // check if the element lies on the right side or not
                if(target <= nums[h] && target >= nums[mid] )
                {
                    l = mid+1;                
                }
                else
                    h = mid -1;
            }
        }
        // if target is not found in the array return -1
        return -1;
    }
};
