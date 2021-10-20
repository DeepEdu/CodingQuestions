/** PROBLEM LINK : https://leetcode.com/problems/sqrtx/
    */


class Solution {
public:
    int mySqrt(int x) {
        long int l = 1;
        long int h = x;
        long int mid ;
        int Res ;
        // using binary search
        while(l <= h)
        {
            mid = l + (h-l)/2;
            if( x == mid*mid)
            {
                return mid;
            }
            if(x < mid*mid)
            {
                h = mid-1;
            }
            if(x > mid*mid)
            {
                l = mid+1;
                // to keep the lowest value
                Res = mid;
            }
        }
        return Res;
    }
};
