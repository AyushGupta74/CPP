#include<iostream>
using namespace std;
class A
{
	int a;
	protected:
	int b;
public:
	void display();
    A();
	A(int a)
	{
		this->a=a;
		cout<<"in paramet. cons of a class "<<endl;
	}

};
	void A:: display()
	{
		cout<<"in display of a class "<<a<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
	}
	A::A() 
    {
	cout<<"in default of a\n ";
	}	
class B:protected A
{

	public:
		void display();
			B();
     
	B(int b)
	{
		this->b=b;
		cout<<"in paramet. cons of b class  "<<endl;
	}
	
};
void B::display()
	{
		cout<<" in display of b class "<<b<<endl;
	}
	B:: B()
    {
	cout<<"in default of b \n";
	}	
int main()
{
	B obj(20);
	obj.display();
	
}
