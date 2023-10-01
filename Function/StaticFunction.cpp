#include<iostream>
using namespace std;
int fun();
int main(){
	cout<<fun()<<endl;
	cout<<fun()<<endl;
	cout<<fun()<<endl;
}
int fun(){
	static int x=0;
	cout<<x;
	x++;
	return x;
}
