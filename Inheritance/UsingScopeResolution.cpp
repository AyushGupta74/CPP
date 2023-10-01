#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
			cout<<"Default constructor of A is called."<<endl;
		}
		A(int);
		void display();
};

A::A(int p){
	cout<<"Inside parameter of A."<<endl;
	a= p;
}

void A::display(){
	cout<<"A is displayed: "<<a<<endl;
}

class B:public A{
	int b;
	public:
		B(){
			cout<<"Default constructor of B is called."<<endl;
		}
		B(int,int);
		void display();
};

B::B(int p, int q):A(p){
	cout<<"Inside parameter of B."<<endl;
	b= q;
}

void B::display(){
	A::display();
	cout<<"B is displayed: "<<b<<endl;
}

int main(){
	B bobj(10,20);
	bobj.display();
	return 0;
}
