#include<iostream>
using namespace std;
int main()
{
    int num, num1=0, num2=1, fibo;
    cout<<"Enter number to get fibonacci series: ";
    cin>>num;
    cout<<num1<<"\n"<<num2<<endl;
    for(int i=2;i<num;i++){
        fibo=num1+num2;
        num1= num2;
        num2=fibo;
        cout<<fibo<<endl;
    }
}