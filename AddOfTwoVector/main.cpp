#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v1 {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v2 {9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> v3 ;
    std::vector<int>::reverse_iterator it;
    std::vector<int>::reverse_iterator it1;
    std::vector<int>::reverse_iterator it2;
    int carry = 0;
    it1 = v1.rbegin();
    it2 = v2.rbegin();
    int sum = 0;
    while(it1 != v1.rend() || it2 != v2.rend())
    {
        int x = 0;
        if(it1 != v1.rend())
        {
            x += *it1;
            it1++ ;
        }
        if(it2 != v2.rend())
        {
            x += *it2;
            it2++;
        }
        x += carry;
        sum = x%10;
        carry = x/10;
        v3.push_back(sum);
    }
    if(carry > 0)
    {
        v3.push_back(carry);
    }

    it = v3.rbegin();
    for(it = v3.rbegin(); it != v3.rend(); it++)
    {
        cout << "" <<*it ;
    }
    return 0;
}
