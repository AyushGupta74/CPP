#include<iostream>
using namespace std;
class A
{
public:
     A()
    {
	cout<<"in default of a\n ";
	}	
	A(int a)
	{
		cout<<"in paramet. cons of a class "<<a<<endl;
	}
	void display()
	{
		cout<<"in display of a class \n";
	}
};
class B:public A
{
	public:
       B()
    {
	cout<<"in default of b \n";
	}	
	B(int a)
	{
		cout<<"in paramet. cons of b class  "<<a<<endl;
	}
	void display()
	{
		cout<<" in display of b class \n";
	}
};
int main()
{
	B obj(10);
	obj.display();
}
