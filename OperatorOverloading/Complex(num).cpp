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

		Complex operator+(int x)                 //c2=c1+5
		{
			Complex temp;
			temp.real= this->real+ x;
			temp.imaginary= this->imaginary+ x;
			return temp;
		}

		friend Complex operator+(int x, Complex& c)     //c2=5+c1
		{
			Complex temp;
			temp.real= c.real+ x;
			temp.imaginary= c.imaginary+ x;
			return temp;
		}

		void display()
		{
			if(imaginary>0)
			{
				cout<<"Complex number: "<<real<<"+"<<imaginary<<"i"<<endl;
			}
			else
			{
				cout<<"Complex number: "<<real<<imaginary<<"i"<<endl;
			}
		}
};

int main()
{
	cout<<"c1:"<<endl;
	Complex c1(5,4);
	c1.display();

	cout<<"c2:"<<endl;
	Complex c2(8,6);
	c2.display();
	cout<<endl;

	Complex c3;
	c3= c1+5;
	cout<<"c3=c1+5:"<<endl;
	c3.display();
	cout<<endl;

	Complex c4;
	c4= 10+c2;
	cout<<"c4=10+c2:"<<endl;
	c4.display();
}