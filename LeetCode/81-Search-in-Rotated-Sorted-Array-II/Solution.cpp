/**  PROBLEM LINK : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
*/


class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = nums.size();
      // First sort the array
        sort(nums.begin(), nums.end());
        int l = 0;
        int h = s -1;
        int mid = 0;
        while(l <= h)
        {
            mid = l + ( h - l)/2;
            if(nums[mid] == target)
            {
                return true;
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
        return false;
    }
};
