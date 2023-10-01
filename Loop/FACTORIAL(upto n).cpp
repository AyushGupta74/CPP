#include<iostream>
using namespace std;
int main()
{
	int mul=1,i=1,n;
	cout<<"Enter number: "<<endl;
	cin>>n;
	while(i<=n){
		mul= mul*i;
		cout<<mul<<endl;
		i++;
	}
	cout<<"Mul is: "<<mul;
	return 0;
}
