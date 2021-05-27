#include <iostream>
#include <vector>

using namespace std;
int main()
{
    std::vector<int> v1 { 10, 20, 30, 40, 50};
    std::vector<int> v2 { 1, 2, 3, 4, 5} ;

    std::vector<int>::iterator it;
    std::vector<int>::reverse_iterator it1;
    std::vector<int>::const_iterator it2;
    std::vector<int>::const_reverse_iterator it3;
    v1.push_back(200);
    cout << "capacity: " << (int) v1.capacity() << "\n";
    cout << "size:" << (int) v1.size() << "\n";
    cout << "max_size:" << (int) v1.max_size() << "\n";

    cout<< "Itreator::";

    for(it = v1.begin(); it < v1.end(); it++)
    {
        cout << "\n" <<*it << "\t";
    }

    cout << "\n"<< "Reverse Itreator:: ";
    for(it1 = v1.rbegin(); it1 < v1.rend(); it1++)
    {
        cout << "\n" <<*it1 << "\t";
    }

    cout << "\n" << "Const Itreator:: ";
    for(it2 = v2.cbegin(); it2 < v2.cend(); it2++)
    {
        cout << "\n" <<*it2 << "\t";
    }

    cout << "\n" << "Const Reverse Itreator::";
    for(it3 = v2.crbegin(); it3 < v2.crend(); it3++)
    {
        cout << "\n" <<*it3 << "\t";
    }

    v1.resize(3);
    cout <<"\n" << "resized Array::";
    for(it = v1.begin(); it < v1.end(); it++)
    {
        cout << "\n" <<*it << "\t";
    }

    return 0;
}
