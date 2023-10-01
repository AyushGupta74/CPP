#include<iostream>
using namespace std;

class Complex
{
	int real, imaginary;
	public:
		Complex()
		{
			real=imaginary=0;
		}

		Complex(int real, int imaginary)
		{
			this->real= real;
			this->imaginary= imaginary;
		}

		Complex operator+(Complex& c)
		{
			Complex temp;
			temp.real= this->real+ c.real;
			temp.imaginary= this->imaginary+ c.imaginary;
			return temp;
		}

		Complex operator-(Complex& c)
		{
			Complex temp;
			temp.real= this->real- c.real;
			temp.imaginary= this->imaginary- c.imaginary;
			return temp;
		}

		Complex operator-(){
			Complex temp;
			temp.real= -this->real;
			temp.imaginary= -this->imaginary;
			return temp;
		}

		void display()
		{
			if(imaginary>0)
			{
				cout<<"Complex number is: "<<real<<"+"<<imaginary<<"i"<<endl;
			}
			else
			{
				cout<<"Complex number is: "<<real<<imaginary<<"i"<<endl;
			}
		}
};

int main()
{
	Complex c1(5,4);
	c1.display();
	Complex c2(8,6);
	c2.display();
	cout<<endl;

	Complex c3;
	c3= c1+c2;
	c3.display();
	cout<<endl;

	Complex c4(3,3);
	c4.display();
	Complex c5(6,4);
	c5.display();
	cout<<endl;

	Complex c6;
	c6= c5-c4;
	c6.display();
	cout<<endl;

	Complex c7(4,4);
	Complex c8=-c7;
	c8.display();
	cout<<endl;
}