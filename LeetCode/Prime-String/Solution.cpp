/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
  public:
    void solve(string s)
    {
        int x = 0, y = 0, Res = 0;
        int l = s.length();
        for(int i = 0; i < l; i++)
        {
          // Adding for even indexes
            if(i%2 == 0 )
            {
                x += (int)s[i];
            }
          // Adding for odd indexes
            if(i%2 == 1)
            {
                y += (int)s[i];
            }
        }
        Res = abs(x - y);
        int i = 3;
      // Array of odd prime number less than 10
        int a[3] = {3,5,7};
        for(int i = 0; i < 3; i++)
        {
            if((Res%a[i]) == 0)
            {
                cout << "Prime String" << "\n";
                return ;
            }
        }
        cout << "Casual String" << "\n";
        return ;
    }
};
int main(int argc, char *a[])
{
    int T ;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        
        string s;
        cin >> s;
        Solution ob;
        ob.solve(s);
    }
    return 0;
}
