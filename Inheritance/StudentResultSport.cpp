#include<iostream>
using namespace std;
class Student
{
	int rollno;
	int marks1, marks2, marks3;
	public:
		int getData()
		{
			cout<<"Enter roll number: ";
			cin>>rollno;
			cout<<"Enter 3 marks";
			cin>>marks1>>marks2>>marks3;
	 	}
	 	void showData(int,int,int,int)
	 	{
	 		cout<<"Roll number: "<<rollno<<endl;
			cout<<"Marks are: "<<marks1<<marks2<<marks3<<endl;
		}
};


class Sport
{
	int sportsMark;
	public:
		int getData()
		{
		cout<<"Enter sportsMark: ";
		cin>>sportsMark;
		}
		void showData(int){
			cout<<"SportsMark is: "<<sportsMark<<endl;
		}
};


class Result:public Student,Sport
{
	int totalMarks,average;
	public:
		int total(){
			totalMarks= marks1+ marks2+ marks3+ sportsMark;
			return totalMarks;
		}
		void showTotal(){
			cout<<"Total marks: "<<totalMarks<<endl;
		}
		int averageData(){
			float average= (float)totalMarks/4;
			return average;
		}
		int getData()
		{
			Student::getData();
			Sport::getData();
		}
		void showData()
		{
			Student::showData();
			Sport::showData();
			cout<<"Total marks are: "<<showTotal()<<endl;
			cout<<"Average is: "<<averageData()<<endl;
		}
};


int main()
{
	Result r1;
	r1.getData();
	r1.showData();
	return 0;
}
