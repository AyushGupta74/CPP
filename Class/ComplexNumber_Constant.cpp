#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
		Complex(){
			real= 3;
			img= 17;
		}
		void display()const
		{
			cout<<"Imaginary number is "<<real<<"+"<<img<<"i"<<endl;
		}
		void setReal(int r){
			real= r;
		}
		int getReal(){
			return real;
		}
};

int main(){
	const Complex c1;
	c1.display();
	Complex c2;
	c2.setReal(12);
	c2.display();
	cout<<c2.getReal()<<endl;
}
