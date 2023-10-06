#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int *y=&x;
    cout<<*y<<endl; //10
    cout<<&x<<endl; //x address
    cout<<y<<endl; //x address
    cout<<&y<<endl; //y address
    cout<<sizeof(x)<<endl; //4
    cout<<sizeof(y)<<endl; //8

}
