#include<iostream>
using namespace std;

template <class X>
void add(X a, X b){
	return a+b;
}
template <class X,class Y>
void add(X a, Y b){
	return a+b;
}

int main()
{
	cout<<add(2,4)<<endl;
	cout<<add(2.54,3.47)<<endl;
	cout<<add(3.4,3)<<endl;
}
