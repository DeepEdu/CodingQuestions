/** PROBLEM LINK : https://leetcode.com/problems/median-of-two-sorted-arrays/
    */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() < nums1.size())
            return findMedianSortedArrays(nums2,nums1);
        int s1 = nums1.size();
        int s2 = nums2.size();
        int l = 0;
        int h = s1;
        int mid1 = 0 , mid2 = 0;
        while(l <= h)
        {
            mid1 = l + (h-l)/2;
            mid2 = (s1 + s2+1)/2 - mid1;
            // edge conditions 
            int l1  = (mid1 == 0)? INT_MIN : nums1[mid1 - 1];
            int r1 = (mid1 == s1)? INT_MAX : nums1[mid1];
            int l2  = (mid2 == 0)? INT_MIN : nums2[mid2 - 1];
            int r2 = (mid2 == s2)? INT_MAX : nums2[mid2];
            // checking if partioning is correct or not
            if(l1 <= r2 && l2 <= r1 )
            {
                // checking for even and odd length of array
                if((s1+s2 )%2 == 0)
                {
                    // for even returning  average of both
                    return (max(l1 , l2) + min(r1 ,r2))/2.0;
                }
                else
                {
                    // for odd length one median 
                    return max(l1 , l2);
                }
                   
            }
            else
            {
                if(l1 > r2 )
                {
                    h = mid1 - 1;
                }
                else
                {
                    l = mid1 + 1;
                }
            }
        }
        return 0.0;
    }
};
