#include<iostream>
#include<string.h>
using namespace std;
 class library
{
protected:
	char lname[20];
public:
	library(char *);
	void display();
	library();
};
 library::library()
 {
	 cout<<"in default of base class\n";
	 strcpy(lname,"\0");
 }
 library::library(char * l)
 {
	 cout<<"in para of library class\n";
	 strcpy(lname,l);
 }
void library::display()
{
	cout<<"library name= "<<lname<<endl;
}
 class distributor: virtual public library
{
protected:
	char dname[20];
public:
	void display();
	distributor();
	distributor(char *);
};
 distributor::distributor()
 {
	 cout<<"in default of distributor\n";
	 strcpy(dname,"\0");
 }
 distributor::distributor(char * d)
 {
	 cout<<"in para of distributor\n";
	 strcpy(dname,d);
 }
void distributor::display()
{
	cout<<"distributor name= "<<dname<<endl;
}
class author: virtual public library
{
protected:
	char aname[20];
public:
	void display();
	author();
	author(char *);
};
author::author()
{
	cout<<"in default of author\n";
	strcpy(aname,"\0");
}
author::author(char * a)
{
	cout<<"in para of author\n";
	strcpy(aname,a);
}
void  author::display()
{
	cout<<" authorname= "<<aname<<endl;
}
class book: public author,public distributor
{
protected:
	char title[20];
public:
	void display();
	book();
	book(char*,char *,char *,char *);
};
book::book()
{
	cout<<"in default of  book\n";
	strcpy(title,"\0");
}
book::book(char * l,char * d,char * a,char * t)
	:library(l),author(a),distributor(d)
{
	cout<<"in para of book\n";
	strcpy(title,t);
}
void  book::display()
{
	library::display();
	distributor::display();
	author::display();
	cout<<" title "<<title<<endl;
}
int main()
{
	book b("dyanmandal","sai","kanetkar","cprog");
	b.display();

}
