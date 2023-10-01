#include<iostream>
using namespace std;

template <class Y>
Y add(Y a, Y b)
   {
	return a+b;
   }
template <class X,class Y>
 add(X a, Y b)
   {
	 return a+b;
   }

int main()
   {
	cout<<add(6,5)<<endl;
	cout<<add(5.54,6.57)<<endl;
	cout<<add(4.5,34)<<endl;
   }
