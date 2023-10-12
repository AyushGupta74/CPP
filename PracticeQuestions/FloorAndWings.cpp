#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter n: ";
	cin>>n;
	int array[n][n];
	cout<<"Enter element which have car by 1 else by 0. \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>array[i][j];
		}
	}
	cout<<endl;
	cout<<"Your space with cars by 1 and not by 0. \n"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	int count=0,cnt[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(array[i][j]==1)
			{
				count++;
				++j;
			}
		}
		cout<<"Count for floor "<<i+1<<" is: "<<count<<endl;
		cnt[i]=count;
		count=0;
		cout<<endl;
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<=cnt[i])
		{
			max=cnt[i];
		}
	}
	cout<<"Max cars can be stolen from single floor: "<<max<<endl;
	return 0;
}
