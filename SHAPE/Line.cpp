#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()
{
}

Line::Line(Point p1, Point p2){
	this->p1=p1;
	this->p2=p2;
}

void Line::show(){
	cout<<"StartPoint :";
	p1.show();
	
	cout<<"EndPoint :";
	p2.show();
 

}

