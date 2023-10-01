#include<iostream>
using namespace std;

class Dob
{
	int day,month,year;
	public:
		Dob()
		{
			day=month=year=0;
		}
		void getDob()
		{
			cout<<"Enter Date of Birth Details: "<<endl;
			cout<<"Day: ";
			cin>>day;
			cout<<"Month: ";
			cin>>month;
			cout<<"Year: ";
			cin>>year;
		}
		void displayDob()
		{
			cout<<"DOB: "<<day<<"/"<<month<<"/"<<year<<endl;
		}
};

class Student
{
	int rollno, totalMarks=0, marks[3];
	Dob dt;
	public:
		
		int getDetails()
		{
			cout<<"Enter rollNumber: ";
			cin>>rollno;
			for(int i=0;i<3;i++)
			{
				cout<<"Enter mark "<<i+1<<": ";
				cin>>marks[i];
				totalMarks+=marks[i];
			}
			dt.getDob();
		}
		int getroll()
		{
			return rollno;
		}
		void displayDetails()
		{
			cout<<"RollNumber: "<<rollno<<endl;
			cout<<"TotalMarks: "<<totalMarks<<endl;
			dt.displayDob();
		}
};

void sortByRoll(Student *s, int n, Student temp)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
			{
				if(s[j].getroll()>s[j+1].getroll())
				{
					temp=s[j+1];
					s[j+1]= s[j];
					s[j]= temp;
				}
			}
		}
	}
int main()
{
	Student s[10], temp;
	int num;
	cout<<"Enter number of students: ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cout<<"Student "<<i+1<<": "<<endl;
		s[i].getDetails();
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<num;i++)
	{
		cout<<"Student "<<i+1<<" details: "<<endl;
		s[i].displayDetails();
		cout<<endl;
	}
	
	sortByRoll(s, num, temp);
	for(int i=0;i<num;i++)
	{
		cout<<"Student "<<i+1<<" details: "<<endl;
		s[i].displayDetails();
		cout<<endl;
	}
	return 0;
}
