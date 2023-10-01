#include<iostream>
using namespace std;

class employee{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary(){
			return 0;
		};
};

employee::employee(){
	cout<<"Missing: ID."<<endl;
	id=0;
}

employee::employee(int i){
	cout<<"In parameter of employee."<<endl;
	id=i;
}

void employee::display(){
	cout<<"Employee id is: "<<id<<endl;
}

class wageemployee: public employee{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
};

wageemployee::wageemployee(){
	cout<<"Missing: wage and rate."<<endl;
	hrs=rate=0;
}

wageemployee::wageemployee(int i, int h, int r):employee(i){
	cout<<"In parameter of wageemployee."<<endl;
	hrs= h;
	rate= r;
}

int wageemployee::findsalary(){
	return hrs*rate;
}

void wageemployee::display(){
	employee::display();
	cout<<"Hour(s) is: "<<hrs<<endl;
	cout<<"Rate is: "<<rate<<endl;
}

class salesman: public wageemployee{
	int sale,comm;
	public:
		salesman();
		salesman(int,int,int,int,int);
		void display();
		int findsalary();
};

salesman::salesman(){
	cout<<"Missing: sales and commision."<<endl;
	sale=comm=0;
}

salesman::salesman(int i, int h, int r, int s, int c):wageemployee(i, h, r){
	cout<<"In parameter of salesman."<<endl;
	sale= s;
	comm= c;
}

int salesman::findsalary(){
	return (wageemployee::findsalary() + sale*comm);
}

void salesman::display(){
	wageemployee::display();
	cout<<"Sale(s) is: "<<sale<<endl;
	cout<<"Commision is: "<<comm<<endl;
}

int main(){
	employee e1(101);
	e1.display();
	e1.findsalary();
	wageemployee w1(102,8,100);
	w1.display();
	w1.findsalary();
	salesman s1(103,8,200,10,10);
	s1.display();
	s1.findsalary();
	return 0;
}
