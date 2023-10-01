#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a,b,j,len=0,i=0;
	cout<<"Enter Characters : "<<endl;
	cin>>a;	
	char str1[a];
	cout<<"Enter String 1"<<endl;
	cin>>str1;
	cout<<"Enter Characters : "<<endl;
	cin>>b;
	char str2[b];
	cout<<"Enter String 2"<<endl;
	cin>>str2;
	while(str1[i] !='\0')
	{
		len++;
		i++;
    	}
  	j = 0;
	while(str2[j]!= '\0')
	{
		str1[len] = str2[j]	;
		len++;
		j++;
	}
	str1[len]='\0';
	cout<<str1<<endl;
}
