//COMPLEX NUMBERS

#include<iostream>
using namespace std;
class Complex{
	int real, img;
	public:
		void getData(){
			cout<<"Enter real and imaginary number "<<endl;
			cin>>real>>img;
		}
		void display(){
			cout<<"The complex number is "<< real<< "+"<<img<<"i"<<endl;
		}
		void acceptParam(int, int);
		void setReal(int r){
			real= r;
		}
		int getReal(){
			return real;
		}
};

void Complex::acceptParam(int r,int i){
	real= r;
	img= i;
}

int main(){
	Complex c1;
	c1.getData();
	c1.display();
	Complex c2;
	c2.acceptParam(10,2);
	c2.setReal(30);
	c2.display();
	cout<<"Modified real part is"<<c2.getReal()<<endl;
}
