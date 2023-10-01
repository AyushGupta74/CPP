//SWAP BY REFERENCE

#include<iostream>
using namespace std;
void swap(int& ,int&);
int main(){
	int a,b;
	cout<<"Enter two numbers to swap "<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"After swap "<<a<<" "<<b<<endl;
}
void swap(int &p, int &q){
	int temp;
	temp= p;
	p= q;
	q= temp;
	cout<<"Inside function "<<p<<q<<endl;
}


