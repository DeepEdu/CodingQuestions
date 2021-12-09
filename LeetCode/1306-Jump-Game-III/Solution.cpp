/** PROBLEM LINK : https://leetcode.com/problems/jump-game-iii/
*/


class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> temp(arr.size(),false);
        return solution(arr,temp,start);
    }
    bool solution(vector<int>& arr ,vector<bool> &temp,int i)
    {
        int s = arr.size();
        if( i < 0 || i >= s || temp[i])
        {
            return false;
        }
        if(arr[i] == 0)
        {
            return true;
        }
        temp[i] = true; // marking visited
        return solution(arr, temp, i + arr[i]) || solution(arr, temp, i - arr[i]);
    }
};
