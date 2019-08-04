#include <iostream>
#include "cube.h"

using namespace std;

int main() {

	cube c;
	cube c2;
	c2.setLWH(1, 2, 3);
	c.setLWH(1, 2, 3);
	cout << "表面积: " << c.getArea() << endl;
	cout << "体积: " << c.getVolume() << endl;
	cout << "是否相同" << c.judgeCube(c2) << endl;

	return 0;
}