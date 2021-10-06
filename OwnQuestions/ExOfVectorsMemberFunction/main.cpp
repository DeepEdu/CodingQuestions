#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //CONSTRUCTORS-->

    std::vector<int>::iterator it;
    std::vector<int> v1 ;
    std::vector<int> v2(6,50) ;
    it = v2.begin() + 3;

    std::vector<int> v3(it,v2.end()) ;
    it = v2.insert(it,200);

    for(it = v3.begin(); it < v3.end(); it++)
    {
        cout << "\n" << *it ;
    }

    return 0;
}
