#include<iostream>
using namespace std;

int main()
{
    int n,num,order1,order2,order3,arm=0;
    cout<<"Enter number to check for armstrong: ";
    cin>>n;
    for(num=1;num<n;++num)
    {
        if(num<=9)
        {
            cout<<num<<" is armstrong!!!"<<endl;
        }
        else if(num>99)
        {
        int orgnum=num;
        order1= num%10;
        order2=(num/10)%10;
        order3= num/100;
        arm=(order1*order1*order1)+(order2*order2*order2)+(order3*order3*order3);
        if(arm==orgnum){
        cout<<arm<<" is armstrong!!!"<<endl;
        }
        }
    }
}