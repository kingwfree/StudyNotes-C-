#include "cube.h"
void cube::setLWH(int l, int w, int h) {
	c_h = h;
	c_l = l;
	c_w = w;
}
int cube::getArea() {
	return c_l * c_w * 2 + c_l * c_h * 2 + c_w * c_h * 2;
}
int cube::getVolume() {
	return c_l * c_w * c_h;
}
int cube::getL() {
	return c_l;
}
int cube::getW() {
	return c_w;
}
int cube::getH() {
	return c_h;
}
bool cube::judgeCube(cube& c2) {
	return (c_l == c2.getL() && c_h == c2.getH() && c_w == c2.getW()) ? true : false;
}