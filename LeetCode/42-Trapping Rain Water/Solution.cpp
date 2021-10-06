/** https://leetcode.com/problems/trapping-rain-water/
 */
 
 class Solution {
public:
    int trap(vector<int>& height) {
        int s = height.size();
        if(s == 0 || s==1 || s==2) return 0;
        int sum = 0;
        //	Initialize left(l) pointer to 0 and right(r) pointer to size-1

        int l = 0, r = s-1;
        int lmax = 0 , rmax = 0;
        while(l <= r)
        {
            /** If height[left] is samller than height[right] will update lmax
                else rmax
                */
            if(height[l] <= height[r])
            {
            	/**	If height[left] is greater than leftmax will update left max
                    else add to sum
                    */
                if(height[l] >= lmax)
                {
                    lmax = height[l];
                }
                else
                {
                    sum += (lmax - height[l]);
                }
                l++;   // moving to next position
            }
            else
            {
                /**	If height[right] is greater than rightmax will update right max
                    else add to sum
                    */

                if(height[r] >= rmax)
                {
                    rmax = height[r];
                }
                else
                {
                    sum += (rmax - height[r]);
                }
                r--; // moving to next position
            }
        }
        return sum;
    }
};
