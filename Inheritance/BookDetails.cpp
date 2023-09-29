#include<iostream>
#include<string.h>
using namespace std;


class Library{
	
	char libName[10];
	
	public:
		Library()
		{
			*libName='\0';
		}
		
		Library(char* lname)
		{
			
			strcpy(libName,lname);
		}
		
		void display()
		{
			cout<<"Library: "<<libName<<endl;
		}
	
};

class Distributor{
	
	char distName[10];
	
	public:
		Distributor()
		{
			*distName='\0';
		}
		
		Distributor(char* dname)
		{
			strcpy(distName,dname);
		}
		
		void display()
		{
			cout<<"Distributor: "<<distName<<endl;
		}
	
};

class Author{
	
	char authName[10];
	
	public:
		Author()
		{
			*authName='\0';
		}
		
		Author(char* aname)
		{
			strcpy(authName,aname);
		}
		
		void display()
		{
			cout<<"AuthorName: "<<authName<<endl;
		}
	
};

class Book: public Author, public Distributor, public Library{
	int bookid;
	char bookName[10];
	
	public:
		Book()
		{
			bookid=0;
			*bookName='\0';
		}
		
		Book(int bid, char* bname, char* aname, char* dname, char* lname):Author(aname), Distributor(dname), Library(lname)
		{
			bookid=bid;
			strcpy(bookName,bname);
		}
		
		void display()
		{
			cout<<"Book ID: "<<bookid<<endl;
			cout<<"Bookname: "<<bookName<<endl;
			Author::display();
			Distributor::display();
			Library::display();
		}
	
};

int main()
{
	Book b(101,"DSA","Ayush","IET", "CDAC");
	b.display();
}
