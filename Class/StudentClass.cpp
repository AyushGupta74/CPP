#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	int roll;
	char name[10];
	double fees;
	public:
		Student(int, char[], double);
		void display()
		{
			cout<<"Rollno. "<<roll<<"Name "<<name<<"Fees "<<fees<<endl;
		}
};

Student::Student(int rn, char* n, double f)
{
	roll= rn;
	strcpy(name, n);
	fees= f;
}

int main()
{
	Student s1(12,"ayush",26782);

	s1.display();
}
