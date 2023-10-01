#include <iostream>
#include<String.h>
using namespace std;
class Computer1{

	public:
		int model_no;
		char model_name[20];
		Computer1();
		Computer1(int, char);
		friend void display();
};
Computer1::Computer1(){
	model_no = 0;	
}
Computer1::Computer1(int model_no, char model_name){
	this->model_no = model_no;
	this->model_name= model_name;
}
Computer1::display(){
	cout<<model_no<<" "<<model_name<<endl;
}
class Computer2:public Computer1{
	int model_no;
	char model_name[20];
		public:
		Computer2();
		Computer2(int, char);
};
Computer2::Computer2(){
	model_no = 0;	
}
Computer2::Computer2(int model_no, char model_name){
	this->model_no = model_no;
	this->model_name = model_name;
}
Computer2::display(){
	cout<<model_no<<" "<<model_name<<endl;
}
class Printer:public Computer1, public Computer2{
	int model_no;
	char model_name[20];
	public:
};
int main(){
	Computer2 c1(11202,"dell");
	c1.display();
}
