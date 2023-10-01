#include<iostream>
using namespace std;

class Date{
	
	int day,month,year;
	public:
		Date(){
			day=month=year=0;
		}
		Date(int d,int m, int y){
			day=d;
			month=m;
			year=y;
		}
		friend void operator+(Date&,int);
		friend void operator-(Date&,int);
		void display(){
			cout<<"Date is: "<<day<<"/"<<month<<"/"<<year<<endl;
		}
	
};

void operator+(Date& x,int y){
	x.day=x.day+y;
	x.month=x.month+y;
	x.year=x.year+y;
}
void operator-(Date& x,int y){
	x.day=x.day-y;
	x.month=x.month-y;
	x.year=x.year-y;
}

class Time{
	
	int hour,minute,second;
	public:
		Time(){
			hour=minute=second=0;
		}
		Time(int h,int m, int s){
			hour=h;
			minute=m;
			second=s;
		}
		friend void operator+(Time&,int);
		friend void operator-(Time&,int);
		void display(){
			cout<<"Time is: "<<hour<<":"<<minute<<":"<<second<<endl;
		}
	
};

void operator+(Time& x,int y){
	x.hour=x.hour+y;
	x.minute=x.minute+y;
	x.second=x.second+y;
}
void operator-(Time& x,int y){
	x.hour=x.hour-y;
	x.minute=x.minute-y;
	x.second=x.second-y;
}

int main(){
	int dd,mm,yy;
	cout<<"Enter day: ";
	cin>>dd;
	cout<<"Enter month: ";
	cin>>mm;
	cout<<"Enter year: ";
	cin>>yy;
	Date d(dd,mm,yy);
	d-2;
	d.display();
	d+4;
	d.display();
	
	int hrs,min,sec;
	cout<<"Enter hour(s): ";
	cin>>hrs;
	cout<<"Enter minute(s): ";
	cin>>min;
	cout<<"Enter second(s): ";
	cin>>sec;
	Time t(hrs,min,sec);
	t-2;
	t.display();
	t+4;
	t.display();
}
