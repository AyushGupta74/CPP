#include<iostream>
using namespace std;
#include<deque>

int main()
{
    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    cout<<"Size of d: "<<d.size()<<endl;

    d.pop_back();
    cout<<"After pop back: ";
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.push_back(3);
    d.push_front(5);
    
    cout<<"Before erase: ";
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"After erase at pos 0: ";
    d.erase(d.begin(),d.begin()+1);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}