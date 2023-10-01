#include<iostream>
using namespace std;
#include<String.h>

class Printer1{
    char name [10];
    char type [25];
    double price;
    public:
    Printer1(char name[],char type[],double price){
        strcpy(this->name,name);
        this->price=price;
        strcpy(this->type,type);
    }
    void display(){
        cout<<"Name of Printer1 : "<<name<<endl;
        cout<<"Type of Printer1 : "<<type<<endl;
        cout<<"Price of Printer1 : "<<price<<endl;
    }
};
class Printer2{
    char name [10];
    char type [25];
    double price;
    public:
    Printer2(char name[],char type[],double price){
        strcpy(this->name,name);
        this->price=price;
        strcpy(this->type,type);
    }
    void display(){
        cout<<"Name of Printer2 : "<<name<<endl;
        cout<<"Type of Printer2 : "<<type<<endl;
        cout<<"Price of Printer2 : "<<price<<endl;
    }
};
class Computer:public Printer1,Printer2{
    char name[10];
    double price;
    public:
    Computer(char name1[],char type1[],double price1,char name2[],char type2[],double price2,char name[],double price):Printer1(name1,type1,price1),Printer2(name2,type2,price2){
        strcpy(this->name,name);
        this->price=price;
    }
    void displayComputer(){
        cout<<"Computer name : "<<name<<endl;
        cout<<"Price of Computer : "<<price<<endl;
    }
    void displayPrinter1(){
        Printer1::display();
    }
    void displayPrinter2(){
        Printer2::display();
    }
};
int main(){
    Computer c("HP","Black n White Printer",13000,"Canon","Colour Printer",15000,"HP",40000);
    c.displayComputer();
    c.displayPrinter1();

    c.displayPrinter2();
}
