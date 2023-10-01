#include<iostream>
using namespace std;
class Date{
	int day, month, year;
	public:
		void acceptDate(){
			cout<<"Enter day, month and year"<<endl;
			cin>>day>>month>>year;
		}
		void displayDate(){
			cout<<"Date is "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		void acceptPara(int, int, int);
		int getDay(){
			return day;
		}
		void setDay(int d){
			day= d;
		}
};

void Date::acceptPara(int d, int m, int y){
	day= d;
	month= m;
	year= y;
}

int main(){
	Date d1;
	d1.acceptDate();
	d1.displayDate();
	Date d2;
	d2.acceptPara(12,9,2024);
	d2.displayDate();
	Date d3;
	d3.setDay(30);
//	d3.displayDate();
	cout<<d3.getDay()<<endl;

	
}
