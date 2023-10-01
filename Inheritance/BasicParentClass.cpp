#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
			cout<<"Default constructor of A is called."<<endl;
		}
		void display(){
			cout<<"A class is displayed: "<<endl;
		}
};

class B:public A{
	int b;
	public:
		B(){
			cout<<"Default constructor of B is called."<<endl;
		}
};

int main(){
	B bobj;
	bobj.display();
	return 0;
}
