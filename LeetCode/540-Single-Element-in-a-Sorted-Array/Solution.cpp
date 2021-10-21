/** PROBLEM LINK : https://leetcode.com/problems/single-element-in-a-sorted-array/
  */

------------------------------------------SOLUTION 1 ----------------------------
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int h = nums.size() - 2;
        int l = 0;
        int mid = 0;
        while(l <= h)
        {
            mid = l + (h-l)/2;
            if(nums[mid] == nums[mid ^ 1])
            {
                l = mid +1;
            }
            else
                h = mid-1;
        }
        return nums[l];
    }
    
};


------------------------------SOLUTION 2------------------------------------------------------------
class Solution {
public:
  int singleNonDuplicate(vector<int>& nums) {
        int h = nums.size() - 2;
        int l = 0;
        int mid = 0;
        while(l <= h)
        {
            mid = l + (h-l)/2;
            // find whether the index is odd or even 
            if(mid%2 == 0)
            {
                /** if the next element is equal to mid
                    update low else high
                    */
                if(nums[mid] == nums[mid+1])
                {
                    l = mid +1;
                }
                else
                    h = mid-1;
            }
            else
            {
                /** if the previous element is equal to mid
                    update low else high
                    */
                if(nums[mid] == nums[mid-1])
                {
                    l = mid +1;
                }
                else
                    h = mid-1;
            }
        }
        return nums[l];
    }
};
