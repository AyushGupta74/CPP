#include <iostream>
#include <fstream>
using namespace std;

class Employee 
{
	public:
    	string Name;
    	int id;
    	int Salary;
};

int main()
{
   Employee e1;
   
   e1.Name="Ayush";
   e1.id= 8;
   e1.Salary= 100000;
   
   ofstream wfile;
   wfile.open("Employee.txt", ios::app);
   wfile.write((char*)&e1,sizeof(e1));
   wfile.close();

   ifstream rfile;
   rfile.open("Employee.txt",ios::in);
   rfile.read((char*)&e1,sizeof(e1));
   rfile.close();
   
   cout<<e1.Name<<endl;
   cout<<e1.id<<endl;
   cout<<e1.Salary<<endl;
   
   return 0;
}
