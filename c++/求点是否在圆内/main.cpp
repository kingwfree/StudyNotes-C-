#include <iostream>
#include "Circle.h"
#include "Point.h"

using namespace std;

int main() {

	Circle c;
	c.setR(5);
	c.setXY(0, 0);
	Point p;
	p.setXY(3, 4);
	cout << c.judgePoint(p) << endl;
	return 0;
}