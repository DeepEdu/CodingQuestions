/** PROBLEM LINK : https://leetcode.com/problems/next-greater-element-ii/
*/


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int x = nums.size();
        vector<int> v(x , -1);
        for(int i = 2*x-1; i >= 0; i--)
        {
            // pop all the element from stack which are smaller than the current element   
            while(s.empty() == false && nums[i%x] >= s.top())
            {
                s.pop();
            }
            // storing the greater element 
            if(i < x && s.empty() == false)
            {
                v[i] = s.top();
            }
            s.push(nums[i%x]);
        }
        return v;
    }
};
