#include<string.h>
#include<iostream>
using namespace std;
int main()
{

	char* name[5]={"Rohan","rutik","rahul","ram","rohit"};
	for(int i=0;i<=5;i++)
	{
		
//		cout<<name[i]<<endl;
//		cout<<(name+i)<<endl;
//	cout<<*(name+i)<<endl;


      int x=strlen(name[i]);
		for(int j=0;j<=x;j++)
		{
				cout<<*(*(name+i)+j);
     	}
		cout<<" ";
	}
	
}
