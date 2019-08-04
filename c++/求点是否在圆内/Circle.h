#pragma once
#include "Point.h"
class Circle
{
public:
	void setR(double r);
	void setXY(int x, int y);
	bool judgePoint(Point &p);
private:
	double c_r;
	int c_x, c_y;
};

