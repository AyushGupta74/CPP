#include<iostream>
using namespace std;
int main()
{
	int mul=1,i=1;
	while(i<=10){
		mul= mul*i;
		cout<<mul<<endl;
		i++;
	}
	cout<<"Mul is: "<<mul;
	return 0;
}
