/** PROBLEM LINK: https://leetcode.com/problems/minimum-absolute-difference/


------------------------SOLUTION 1-------------------------------------
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int s = arr.size();
        vector<vector<int>> Res;
        int mini = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < s-1; i++)
        {
            int x = abs(arr[i] - arr[i + 1]);
            if(x < mini) 
            {
                mini = x;
            }
        }
        for(int j = 0; j < s-1; j++)
        {
            vector<int> v;
            if(arr[j] < arr[j+1] && abs(arr[j+1] - arr[j]) == mini)
            {
                v.push_back(arr[j]);
                v.push_back(arr[j+1]);
                Res.push_back(v);
            }
        }
        return Res;
    }
};
---------------------SOLUTION 2------------------------
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int s = arr.size();
        vector<vector<int>> Res;
        int mini = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int j = 0; j < s-1; j++)
        {
            int x = abs(arr[j+1] - arr[j]);
            if(x == mini)
            {
                Res.push_back({arr[j], arr[j+1]});
            }
            else if(x < mini)
            {
                Res = {};
                mini = x;
                Res.push_back({arr[j], arr[j+1]});
            }
        }
        return Res;
    }
};
