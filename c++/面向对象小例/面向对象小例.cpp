#include <iostream>
#include "cube.h"

using namespace std;

int main() {

	cube c;
	cube c2;
	c2.setLWH(1, 2, 3);
	c.setLWH(1, 2, 3);
	cout << "�����: " << c.getArea() << endl;
	cout << "���: " << c.getVolume() << endl;
	cout << "�Ƿ���ͬ" << c.judgeCube(c2) << endl;

	return 0;
}