#include<iostream>
using namespace std;
class A
{
public:
        A()
    {
	cout<<"in default of a\n ";
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
	void displayy()
	{
		cout<<" in display of b class \n";
	}
};
int main()
{
	B obj;
	obj.display();
}
