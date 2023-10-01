#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
		date(date&);
};

date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void date::show()
{
	cout<<"Date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date::date(date &a){
	this->dd=a.dd;
	this->mm=a.mm;
	this->yy=24;
}

int main()
{
	date d(18,9,23);
	date d1(d);
	d.show();
	d1.show();
	return 0;
}
