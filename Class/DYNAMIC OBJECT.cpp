#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
		Complex(){
			real=img=2;
		}
		Complex(int r, int i){
			real=r;
			img=i;
		}
		void show(){
			cout<<"Complex number is: "<<real<<"+"<<img<<"i"<<endl;
		}
};

int main(){
	Complex* ptr= new Complex();
	ptr->show();
	Complex* ptr1= new Complex(10,10);
	ptr1->show();
	delete[]ptr;
}
