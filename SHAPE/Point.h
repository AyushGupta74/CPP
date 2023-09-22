#ifndef POINT_H
#define POINT_H
#include "Shape.h"

class Point:public Shape
{   
	int xcor;
	int ycor;
	public:
		Point();
		Point(int, int);
		void show();
};

#endif
