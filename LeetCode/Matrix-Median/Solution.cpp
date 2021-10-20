/**  PROBLEM LINK : https://www.interviewbit.com/problems/matrix-median/#
    */


int Solution::findMedian(vector<vector<int> > &A) {
    int low = 0;
    int high = INT_MAX;
    int mid = 0;
    int row = A.size();
    int column = A[0].size();
    int element = row*column;
    while(low <= high)
    {
        mid = (low + high)/2;
        int count = 0;
        for(int i = 0; i < row; i++)
        {
            /** Finding total number of elements less than equal to mid
                using binary search
                */
            int l = 0 , h = column-1;
            int m = 0 ;
            while(l <= h)
            {
                m = l +(h-l)/2;
                if(A[i][m] <= mid)
                {
                    l = m+1;
                }
                else
                {
                    h = m-1;
                }
            }
            count += l;
        }
        /** if count is less than the total number of half elements in matrix
            then range will be from mid +1 to high
            else range will be from low to mid -1 
            */
        if(count <= (element/2))
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return low;
}
