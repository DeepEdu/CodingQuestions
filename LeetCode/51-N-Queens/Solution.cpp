/**  PROBLEM LINK:
      https://leetcode.com/problems/n-queens/
    */


class Solution {
public:
    bool check(int i, int j, int &n, vector<string> &v) 
    {
        //check if the column had a queen before.
        for (int x = j; x >= 0; x--)
        {
            if (v[i][x] == 'Q') return false;
        }
        
        //check if the upper diagonal had a queen before.
        for (int x = i , y = j ; x >= 0 && y >= 0;  x--, y--)
        {
            if (v[x][y] == 'Q') return false;
        }
        
        //check if the lower diagonal had a queen before.
        for (int x = i, y = j ; x < n && y >= 0; x++, y--)
        {
            if (v[x][y] == 'Q') return false;
        }
        return true;
    }

    void solution(int j, int n, vector<string> &v, vector<vector<string>> &Res)
    {
        if(j == n)
        {
            //store the string
            Res.push_back(v);
            return;
        }
        for(int i = 0; i < n; i++)
        {
            // check if the queen can be placed or not 
            if(check(i, j, n, v))
            {
                v[i][j] = 'Q';
                solution(j+1, n, v, Res);
                v[i][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> Res;
        vector<string> v(n);
        string s(n, '.');
        for(int i = 0; i<n; i++)
        {
            v[i] = s;
        }
        solution(0, n, v, Res);
        return Res;
    }
};
