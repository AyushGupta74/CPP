#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;

    vector<int> a(5,3);

    cout<<"print a:"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of vector of 0 elements: "<<v.size()<<endl;

    v.push_back(1);
    cout<<"Capcity of vector v after 1 element inserted: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector v after 2 element inserted: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of vector v after 3 element inserted: "<<v.capacity()<<endl;
    cout<<"Size of vector v after 3 element inserted: "<<v.size()<<endl;
    cout<<endl;

    cout<<"a At index 2 is: "<<a.at(2)<<endl;
    cout<<"v first element: "<<v.front()<<endl;
    cout<<"v last element: "<<v.back()<<endl;

    cout<<"Before pop: ";
    for(int i:v)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"After pop: ";
    for(int i:v)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}