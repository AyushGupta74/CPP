#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
			cout<<"Default constructor of A is called."<<endl;
		}
		A(int a){
			cout<<"Parameter of A is called."<<endl;
			this->a= a;
		}
		void display(){
			cout<<"A class is displayed: "<<a<<endl;
		}
};

class B:public A{
	int b;
	public:
		B(){
			cout<<"Default constructor of B is called."<<endl;
		}
		B(int b):A(15){
			cout<<"Parameter of B is called."<<endl;
			this->b= b;
		}
		void display(){
			A::display();
			cout<<"B class is displayed: "<<b<<endl;
		}
};

int main(){
	B bobj(10);
	bobj.display();
	cout<<"Size of B is: "<<sizeof(bobj);
	return 0;
}
