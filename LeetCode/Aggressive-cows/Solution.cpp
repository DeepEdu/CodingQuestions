/** PROBLEM LINK : https://www.spoj.com/problems/AGGRCOW/
*/


#include <iostream>
using namespace std;

bool check(int a[], int n, int cows, int D) 
{
    int c = 1; 
    int p = a[0];
    for(int i = 1; i < n; i++) 
    {
      //check  Distance is smaller or not
        if(a[i] - p >= D)
        {
            c++;
            p = a[i]; 
        }
    }
    if(c >= cows) return true;
    return false; 
}
int main() 
{
	int t;
	cin >> t;
	while(t--) 
	{
	    int n, cows;
	    cin >> n >> cows;
	    int a[n];
	    for(int i = 0;i<n;i++) 
	    {
	    	cin >> a[i]; 
	    }
      // Sort the array
	    sort(a,a+n); 
	    // take high as diff between the first and last value
	    int low = 1, high = a[n-1] - a[0]; 
	    
	    while(low <= high) 
	    {
	        int mid = low + (high - low)/2; 
	        // check if cow can be put or not
	        if(check(a,n,cows,mid)) 
	        {
	            low = mid + 1;
	        }
	        else 
	        {
	            high = mid - 1; 
	        }
	    }
	    cout << high << endl; 
	}
	return 0;
}
