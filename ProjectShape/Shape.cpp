#include "Shape.h"
#include<iostream>
using namespace std;

Shape::Shape()
{
	thickness=0;
}

int Shape::getData()
{
	cout<<"Enter thickness: ";
	cin>>thickness;
}

void Shape::show(){
	cout<<"Thickess is: "<<thickness<<endl;
}
