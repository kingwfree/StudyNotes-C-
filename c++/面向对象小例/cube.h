#pragma once
class cube
{
public:
	void setLWH(int l, int w, int h);
	int getArea();
	int getVolume();
	bool judgeCube(cube &c2);
	int getL();
	int getW();
	int getH();
private:
	int c_l, c_w, c_h;
};

