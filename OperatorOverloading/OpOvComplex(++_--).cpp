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

		Complex operator++()      //pre increment
		{
			++this->real;
			++this->imaginary;
			return *this;
		}

		Complex operator++(int)   //post increment
		{
			Complex temp= *this;
			++this->real;
			++this->imaginary;
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
	c3=++c1;
	cout<<"Pre-increment(c3=++c1):"<<endl;
	cout<<"c3:"<<endl;
	c3.display();
	cout<<"c1:"<<endl;
	c1.display();
	cout<<endl;

	Complex c4;
	c4=c2++;
	cout<<"Post-increment(c4=c2++):"<<endl;
	cout<<"c4:"<<endl;
	c4.display();
	cout<<"c2:"<<endl;
	c2.display();
	cout<<endl;
}