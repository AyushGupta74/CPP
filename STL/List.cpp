#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l;
    list <int> n(l);
    list <int> a(4,100);

    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    a.push_back(2);
    a.push_front(1);

    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    a.pop_back();
    a.pop_back();
    a.erase(a.begin());

    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}