#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter Characters : "<<endl;
	cin>>a;
	char st1[a];
	char st2[a];
	int i=0;
	cout<<"Enter String 1"<<endl;
	cin>>st1;
	cout<<"Enter String 2"<<endl;
	cin>>st2;
	int flag = 1;
	while(a>=0)
	{
	if(st1[a]== st2[a]){
		a--;
		flag = 1;
	}
	else{
		flag = 0;
		break;
	}
    }
    if(flag == 1)
    	cout<<"String Compared"<<endl;
    else
    	cout<<"String not compared"<<endl;
}
	

