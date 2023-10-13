#include<iostream>
using namespace std;

int main()
{
	int sum=0,horsenum,count=0,i,j,max=0,target;
	cout<<"Enter number of horses: ";
	cin>>horsenum;
	cout<<"Enter target price: ";
	cin>>target;
	cout<<endl;
	int horses[horsenum];
	cout<<"Enter bet price for each horse according to their number.\n"<<endl;
	for(i=0;i<horsenum;i++)
	{
		cout<<"Enter price for horse number "<<i+1<<": ";
		cin>>horses[i];
	}
	
	for(i=0;i<horsenum;i++)
	{
		for(j=i;j<horsenum;j++)
		{
			sum=sum+horses[j];
			if(sum<target)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if(max<=count)
		{
			max=count;
		}
		count=0;
		sum=0;
	}
	
	cout<<"\n"<<<<"Maximum number of horses to bet: "<<max<<endl;
	return 0;
}
