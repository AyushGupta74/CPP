#include<iostream>
using namespace std;

int main()
{
    int base, exponent, power=1;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>exponent;
    for(int i=0;i<exponent;i++)
    power=power * base;
    cout<<"Power is: "<<power<<endl;
    return 0;
}
