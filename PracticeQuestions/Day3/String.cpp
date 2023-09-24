#include<iostream>
using namespace std;

int main()
{
    char a[5]={'C','D','A','C'};
    char *b=a;

    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<*a<<endl;
    cout<<a+1<<endl;
    cout<<*(a+2)<<endl;

    cout<<b<<endl;
    cout<<b++<<endl;
    cout<<b+1<<endl;
    cout<<*(b+2)<<endl;
    cout<<*b+2<<endl;
}