#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v1 ;
    std::vector<int> v2 { 1, 2, 3, 4, 5} ;
    std::vector<int>::iterator it;

    v1.assign(5,100);
    for(it = v1.begin(); it < v1.end(); it++)
    {
        cout << "\n" <<*it ;
    }

    it = v1.insert(it , 200);
    v1.erase(it);
    it = v1.begin()+3;
    v1.assign(it , v1.end());

    v1.push_back(200);
    cout << "\n" << "size of v1:" << (int) v1.size() << "\n";
    v1.pop_back();
    cout << "size of v2:" << (int) v1.size() << "\n";

    v1.assign(v2.begin(),v2.end());
    for(it = v1.begin(); it < v1.end(); it++)
    {
        cout << *it << "\n" ;
    }

    v1.at(4)= 20;
    v1[1]= 50;
    v2.swap(v1);
    for(it = v1.begin(); it < v1.end(); it++)
    {
        cout <<*it << "\n" ;
    }
    cout << "FRONT"<<v1.front() <<"\n";
    cout << "BACK" <<v1.back() <<"\n";

    int *x = v2.data();
    cout << *x <<"\t"<< *(x+2);
    v1.clear();
    return 0;
}
