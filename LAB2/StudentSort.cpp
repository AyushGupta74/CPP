#include<iostream>
using namespace std;

class Student
{
	int rollno,day,month,year;
	char s[20];
	public:
	
		char name()
		{
			cout<<"Enter name "<<endl;
			cin>>s;
		}
		int date(int dd, int mm, int yy)
		{
			day=dd;
			month=mm;
			year=yy;
		}	
		int totalmarks()
		{
			int m1,m2,m3,m4,m5;
			cout<<"Enter 5 marks"<<endl;
			cin>>m1>>m2>>m3>>m4>>m5;
			tm=m1+m2+m3+m4+m5;
			return tm;
		}
};

int main()
{
	
	return 0;
}
