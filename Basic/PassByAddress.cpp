#include<iostream>
using namespace std;
void Square(int*n)
{
    *n= *n * *n;
}

void Swap(int*p, int*q){
    int temp= *p;
    *p= *q;
    *q= temp;
}

void AreaRect(int *l, int *b, int *ar){
    *ar=*l * *b;
}

int main()
{
    int num;
    cout<<"SQUARE"<<endl;
    cout<<"Enter number for it's square: ";
    cin>>num;
    Square(&num);
    cout<<"Square is: "<<num<<endl;


    int num1,num2;
    cout<<"SWAP"<<endl;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    Swap(&num1,&num2);
    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;


    int length, breadth, area;
    cout<<"RECTANGLE"<<endl;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    AreaRect(&length, &breadth, &area);
    cout<<"Area of rectangle is: "<<area<<endl;
}
