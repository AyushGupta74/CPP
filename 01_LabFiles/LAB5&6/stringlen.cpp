#include<iostream>
using namespace std;
void sstrlen(char*);
int main()
{char a[10];
	cout<<"enter a string \n";
	cin>>a;
	sstrlen(a);
}

void sstrlen(char* a)
{
	int len =0;
	int i=0;
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	cout<<"length is "<<len<<endl;
}
