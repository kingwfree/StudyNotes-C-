#include "Circle.h"


void Circle::setR(double r) {
	c_r = r;
}

void Circle::setXY(int x,int y) {
	c_x = x;
	c_y = y;
}

bool Circle::judgePoint(Point &p) {
	int dist;
	dist = (p.getX() - c_x)* (p.getX() - c_x) + (p.getY() - c_y) * (p.getY() - c_y);
	return dist <= c_r * c_r ? true : false;
}