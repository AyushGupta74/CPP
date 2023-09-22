#include "Point.h"
#include<iostream>
using namespace std;

Point::Point(){
	xcor=ycor=0;
}


Point::Point(int x, int y){
	xcor=x;
	ycor=y;
}
	 
	void Point::show()
	{
		cout<<"Point is:"<<"("<<xcor<<","<<ycor<<")"<<endl;
	}
