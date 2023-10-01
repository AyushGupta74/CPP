#include<iostream>
using namespace std;
class emp  //                                     class1->emp
{
	int id;
	public:
	   emp(int);
		emp();
		void disp();
		int findSal()
		{
			return 0;
		}
};
emp::emp()
{
	cout<<"in default of emp /n";//1
	id=0;
}
 emp::emp(int i)
{
	cout<<" in parameter of emp \n";
	id=i;
	
}
void emp::disp()
{
	cout<<"id of an emp is "<<id<<endl;//4
}
class wagemp:public emp//                            class2->wagemp
{
	int hrs,rate;
	public:
		wagemp();
		wagemp(int,int,int);
		void display();
		int findsal();
};
wagemp::wagemp()
{
	cout<<"in wagemp def cons call "<<endl;//2
	hrs=0;
	rate=0;
}
wagemp::wagemp(int i,int h,int r):emp(i)
{
	cout<<" in wagemp para fun call \n";
	hrs=h;
	rate=r;
}
int wagemp::findsal()

{
	return hrs*rate;
}
void wagemp::display()
{
	emp::disp();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
class salemanager:public wagemp//                            class3->salemanager
{
	int sale,comm;
	public:
		salemanager();
		salemanager(int,int,int,int,int);
		void display();
		int findsal();
};
salemanager::salemanager()
{
	cout<<" in default cons of salemanager call \n";
	sale=comm=0;
}
salemanager::salemanager(int i,int h,int r,int s,int c):wagemp(i,h,r)
{
	cout<<" in para of salemanag call \n";//3
	sale=s;
	comm=c;
}
void salemanager::display()
{
	wagemp::disp();
	cout<<"sales of emp is "<<sale<<endl;//5
	cout<<"comm of an emp is "<<comm<<endl;//6
}
int salemanager::findsal()
{
	return (salemanager::findsal())+sale*comm;//7
}
int main()//                                               main method
{
	salemanager* sm=new salemanager(101,10,500,2000,1);
	sm->display();
	if(sm)
	delete sm;
	cout<<"salary is "<<sm->findsal();
}
