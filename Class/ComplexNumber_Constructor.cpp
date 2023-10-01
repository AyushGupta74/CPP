#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
		void acceptData(){
			cout<<"enter the real and imaginary numbers"<<endl;
			cin>>real>>img;
		}
		void getData(){
			cout<<"The complex numbers is "<<real<<"+"<<img<<"i"<<endl;
		}
		Complex(){
			cout<<"constructor is called "<<endl;
			real=5;
			img=4;
			
		}
		Complex(int r, int i)
		{
			
			real=r;
			img=i;
			cout<<"parameterised constructor is called "<<endl;
		}
};

int main(){
	Complex c1;
	c1.getData();
	c1.acceptData();
	c1.getData();
	Complex c2(10,2);
	c2.getData();
}
