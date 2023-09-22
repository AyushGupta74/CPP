#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include "Shape.h"

class Line : public Point
{
	public:
		Line();
		Line(Point p1, Point p2);
		void show();
	protected:
		Point p1,p2;
};

#endif
