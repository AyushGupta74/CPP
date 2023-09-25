#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int a[5]={7,10,7,23,66};
	cout<<"Your Data: ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j+1];
				a[j+1]= a[j];
				a[j]= temp;
			}
		}
	}
	cout<<"Sorted Data: ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
