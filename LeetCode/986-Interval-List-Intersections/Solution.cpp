/** PROBLEM LINK : https://leetcode.com/problems/interval-list-intersections/
*/

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int sf = firstList.size();
        int ss = secondList.size();
        vector<vector<int>> Res;
        int i = 0;
        int j = 0;
        while(i < sf  && j < ss)
        {
            int x = max(firstList[i][0], secondList[j][0]);
            int y = min(firstList[i][1], secondList[j][1]);
            if(x <= y)
            {
              ans.push_back({x, y}); 
            }
            if(firstList[i][1] <= secondList[j][1]) 
            {
                i++;
            }
            else 
            {
                j++;
            }
        }
    return Res;
    }
};
