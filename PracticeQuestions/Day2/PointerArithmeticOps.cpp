#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int *b = arr;
    
    cout<<"ADDRESS:"<<endl;
    cout<<b<<endl;
    cout<<b+1<<endl;
    cout<<b<<endl;
    cout<<b-1<<endl;
    cout<<(4+b)<<endl;
    cout<<(b+4)<<endl;
    cout<<&b[4]<<endl;

    cout<<endl;

    cout<<"VALUE:"<<endl;
    cout<<*b+1<<endl;
    cout<<(*b+1)<<endl;
    cout<<*(1+b)<<endl;
    cout<<4[b]<<endl;
    cout<<b[4]<<endl;
}