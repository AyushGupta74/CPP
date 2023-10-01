#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"Default constructor of A is called."<<endl;
		}
		void display(){
			cout<<"A class is displayed."<<endl;
		}
};

class B:public A{
	public:
		B(){
			cout<<"Default constructor of B is called."<<endl;
		}
		void display(){
			cout<<"B class is called."<<endl;
		}
};

int main(){
	B bobj;
	bobj.display();
	return 0;
}
