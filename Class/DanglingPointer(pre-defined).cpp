#include<iostream>
#include<string.h>
using namespace std;

class string1
{
	int len;
	char* ptr;
	public:
		string1();
		string1(char*);
		void string1display();
		~string1();
};

string1::string1(){
	cout<<"Constructor is called. \n";
	len=5;
	ptr= "CDAC";
}
void string1::string1display()
{
	cout<<"Length is: "<<len<<endl;
	cout<<"String is: "<<ptr<<endl;
}
string1::string1(char* str)
{
	len=strlen(str);
	ptr= new char[len+1];
	strcpy(ptr,str);
}
string1::~string1()
{
	cout<<"Destructor is called. \n";
	if(ptr)
	delete[]ptr;
	ptr=NULL;
}

int main()
{
	string1 s1;
	s1.string1display();
	string1 s2("Ayush");
	s2.string1display();
	{
		string1 s3(s2);
		s3.string1display();
		s3.~string1();
	}
	s2.string1display();
	return 0;
}
