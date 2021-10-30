/** Problem Link:  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
  */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = nums.size();
        vector<int> Res(2,-1);
        int l = 0;
        int h = s-1;
        int mid = 0;
        while(l <= h)
        {
            //Searching for left half
            mid = l + (h - l)/2;
            if(nums[mid] == target)
            {
                Res[0] = mid;
                h = mid -1;
            }
            else
            {
                if(nums[mid] < target)
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }
        // Searching for right half 
        l = 0;
        h = s-1;
        mid = 0;
        while(l <= h)
        {
            mid = l + (h - l)/2;
            if(nums[mid] == target)
            {
                Res[1] = mid;
                l = mid + 1;
            }
            else
            {
                if(nums[mid] < target)
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }
        return Res;
    }
};
