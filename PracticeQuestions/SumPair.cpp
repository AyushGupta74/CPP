#include<iostream>
using namespace std;

int main()
{
	int arr[4]={1,5,7,1};
	int sum=6;
	int pair=0;
	// int length=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<length;i++)
	{
		for(int j=i; j<length; j++)
		{
			if(arr[i]+arr[j]==sum)
			{
				pair++;
			}
			
		}
	}
	cout<<"Pairs : "<<pair<<endl;
}
