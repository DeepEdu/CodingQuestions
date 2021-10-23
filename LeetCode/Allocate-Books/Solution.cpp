/** PROBLEM LINK : https://www.interviewbit.com/problems/allocate-books/
*/


int check(vector<int> &A, int pages, int students) {
    int c = 0;
    int sum = 0; 
    for(int i = 0; i < A.size(); i++) 
    {
        if(sum + A[i] > pages) 
        {
            // new student
            c++; 
            sum = A[i];
            if(sum > pages) return false; 
        }
        else {
            //adding elements 
            sum += A[i];
        }
    }
    if(c < students) return true; 
    return false; 
}
int Solution::books(vector<int> &A, int B) 
{
    if(B > A.size()) return -1; 
    int l = A[0]; 
    int h = 0;
    // high value will be sum of the all elements
    for(int i = 0;i<A.size();i++)
     {
        h = h + A[i]; 
        l = min(low, A[i]); 
    }
    int res = -1; 
    while(l <= h) 
    {
        int mid = l + (h-l)/2;
        // checking if it is possible or not
        if(check(A, mid, B)) 
        {
            res = mid; 
            h = mid - 1; 
        }
        else 
        {
            l = mid + 1; 
        }
    }
    return l; 
}
