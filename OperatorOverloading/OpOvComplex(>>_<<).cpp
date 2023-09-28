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

		friend void operator <<(ostream & out,const Complex & c)                 
		{
			out<< c.real;
			out<< "+"<<c.imaginary<<"i"<<endl;
		}

		friend void operator >>(istream & in, Complex & c)     
		{
			cout<<"Enter real part: ";
			in>> c.real;
			cout<<"Enter imaginary part: ";
			in>> c.imaginary;
		}
};

int main()
{
	Complex c1;
	cin>>c1;
	cout<<"The Complex Object is: ";
	cout<<c1;
	return 0;
}