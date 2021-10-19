/** PROBLEM LINK :: https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
  */
  
  class Solution{
    void solve(int i,int j,vector<vector<int>> &a, int n, vector<string>&Res, string s,vector<vector<int>> &v)
    {
        if(i == n-1 && j == n-1) 
        {
            Res.push_back(s);
            return; 
        }
        // checking for next block in all directions
        // for down 
        if(i+1 < n && (v[i+1][j] == 0) && a[i+1][j] == 1) 
        {
            v[i][j] = 1; 
            solve(i+1, j, a, n, Res, s + 'D', v);
            v[i][j] = 0; 
        }
        
        // for left
        if(j-1 >= 0 && (v[i][j-1] == 0)&& a[i][j-1] == 1) 
        {
            v[i][j] = 1; 
            solve(i, j-1, a, n, Res, s + 'L', v);
            v[i][j] = 0; 
        }
        
        // for right 
        if(j+1 < n && (v[i][j-1] == 0) && a[i][j+1] == 1)
        {
            v[i][j] = 1; 
            solve(i, j+1, a, n, Res, s + 'R', v);
            v[i][j] = 0; 
        }
        
        // for up
        if(i-1 >= 0 && (v[i][j-1] == 0) && a[i-1][j] == 1) 
        {
            v[i][j] = 1; 
            solve(i-1, j, a, n, Res, s + 'U', v);
            v[i][j] = 0; 
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> Res;
        vector<vector<int>> v(n, vector<int> (n, 0)); 
        if(m[0][0] == 1) 
        {
            solve(0,0,m,n, Res, "", v);
        }
        return Res; 
    }
};
