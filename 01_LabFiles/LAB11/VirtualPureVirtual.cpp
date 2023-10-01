#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual int area()
		{
			cout<<"inside display of class shape"<<endl;
		}
		virtual void Display()=0;
		void display()
		{
			cout<<"Inside display of shape class"<<endl;
		}
		
};

class Square : public Shape
{
	int side;
	int Area=1;
	
	public:
		Square(int side)
		{
			this->side=side;
		}
		int area()
		{
			Area= side * side;
		}
		void Display()
		{
			cout<<"Area of square is : "<<Area<<endl;
		}
	
};

class Rectangle : public Shape
{
	int l,b;
	int Area =1;
	
	public:
		Rectangle(int len,int bre)
		{
			l=len;
			b=bre;
		}
		int area()
		{
			Area=  l * b;
		}
		void Display()
		{
			cout<<"Area of Rectangle is : "<<Area;
		}
	
};

int main()
{
	Shape * ptr;
	ptr->display();
	
	Square s(10);
	ptr= &s;
	ptr->area();
	ptr->Display();
	
	Rectangle R(10,20);
	ptr=&R;
	ptr->area();
	ptr->Display();	
}
