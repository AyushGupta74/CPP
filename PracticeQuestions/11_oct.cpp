#include<iostream>
using namespace std;

int main()
{
	int row,col,i,j;
	cout<<"Enter Row and Column "<<endl;
	cin>>row>>col;
	int arr[row][col];
	cout << "Enter elements : ";
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cin >> arr[i][j];
		}
	}
	for(i=0; i<row; i++)
	{
		if((i+1)%2==1)
		{
			for(j=0; j<col; j++)
			{		
				cout << arr[i][j]<<" ";
			}
		}
		else
		{
			for(j=col-1; j>=0; j--)
			{		
				cout << arr[i][j]<<" ";
			}
		}
	}
	return 0;	
}
