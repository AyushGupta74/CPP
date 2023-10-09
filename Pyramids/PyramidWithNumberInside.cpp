#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    
    for(i=0;i<5;i++)
    {
        for(k=0;k<4-i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<i+1;
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
