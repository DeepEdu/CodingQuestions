#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
vector<int> sumOfVector( vector<int> a, vector<int> b);
using vi = vector<int>;
void printVec(vi v)
{
    for(auto i: v)
    {
        cout << "" <<i ;
    }

}
int main()
{
    int m = 1;
    std::vector<int> v1 {9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> v2 {9, 1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> v4 ;
    std::vector<vector<int>> v3 ;
    std::vector<int>::reverse_iterator vit;
    std::vector<int>::reverse_iterator it1;
    std::vector<int>::reverse_iterator it2;
    int n = 0;
    for( it2 = v2.rbegin(); it2 != v2.rend(); it2++)
    {
        int carry = 0;
        v3.push_back({});
        if(n > 0)
        {
            for(int i = 0 ; i < n ; i++ )
            {
                v3[n].push_back(0);
            }
        }
        for( it1 = v1.rbegin(); it1 != v1.rend(); it1++)
        {
            int x = 1;
            x = (*it2) * (*it1);
            x += carry;
            m = x%10;
            carry = x/10;
            v3[n].push_back(m);
        }
        if(carry)
        {
            v3[n].push_back(carry);
        }
        printVec(v3[n]);
        n++;
    }

    vector<int> y {};
    for(int j = 0 ; j <(int) v2.size();j++)
    {
        std::reverse(v3[j].begin(),v3[j].end());
        y = sumOfVector(y,v3[j]);
    }
    v4 = y;
    vit = v4.rbegin();
    printf("\n");
    printVec(v4);
    return 0;
}

vector<int> sumOfVector( vector<int> a, vector<int> b)
{
    int m = 1;
    int carry = 0;
    std::vector<int> v4 ;
    std::vector<int>::reverse_iterator it4;
    std::vector<int>::reverse_iterator it5;
    it4 = a.rbegin();
    it5 = b.rbegin();
    while(it4 != a.rend() || it5 != b.rend())
    {
        int x = 0;
        if(it4 != a.rend())
        {
            x += *it4;
            it4++ ;
        }
        if(it5 != b.rend())
        {
            x += *it5;
            it5++;
        }
        x += carry;

        carry = x/10;
        x = x%10;
        v4.push_back(x);
    }
    if(carry > 0)
    {
        v4.push_back(carry);
    }
    reverse(v4.begin(),v4.end());
    return v4;
}
