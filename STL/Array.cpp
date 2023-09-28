#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> a = {1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"First element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
    cout<<"At index 2: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;
    return 0;

}