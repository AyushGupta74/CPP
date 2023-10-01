#include<iostream>
#include<string.h>
using namespace std;

class Address{
	int pinCode;
	char landmark[20];
	public:
		Address(char landmark[],int pincode)
		{
			strcpy(this->landmark,landmark);
			this->pinCode=pinCode;
		}
		void display()
		{
			cout<<"Landmark: "<<landmark<<endl;
			cout<<"Pincode: "<<pinCode<<endl;
		}
};

class Student{
	int id;
	char name[20];
	int marks[5];
	Address ad;
	public:
		Student(int id, char name[],int marks[],char landmark[], int pinCode):ad(landmark, pinCode)
		{
			this->id=id;
			strcpy(this->name, name);
			cout<<"Marks: ";
			for(int i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		void display()
		{
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Marks: ";
			for(int i=0;i<5;i++)
			{
				cout<<marks[i]<<" ";
			}
			cout<<endl;
			ad.display();
		}
};

int main()
{
//	int marks[5]={88,98,96,97,99};
	Student s1(8, "Ayush",marks,"GokhleNagar",411016);
	s1.display();
}
