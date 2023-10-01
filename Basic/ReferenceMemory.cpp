//REFERENCE MEMORY

#include<iostream>
using namespace std;
int main(){
	int a= 10;
	int &b= a;
	int &c= a;
	cout<<a<<b<<c<<"	"<<"Address"<<&a<<endl;
	c=30;
	cout<<c<<a<<b<<"	"<<"Value"<<c<<endl;
}
