#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
	int a,b;
	cout<<"Enter two nos";
	cin>>a>>b;
	cout<<"Before swapping a & b  "<<a<<b<<endl;
	swap(a,b);
	cout<<"After swapping a & b  "<<a<<b<<endl;
	
}
void swap(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"After swapping p & q  "<<p<<q<<endl;
}
