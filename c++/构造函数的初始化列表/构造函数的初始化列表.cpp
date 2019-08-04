#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
	//const;类型一定要在初始化阶段赋值
	A(int a, int m):a_m(m)
	{
		a_x = a;
		cout << "有参A..." << a_x << " " << a_m << endl;
	}
	A(const A& a,int m):a_m(m)
	{
		a_x = a.a_x;
		cout << "拷贝构造A..." << a_x  << " " << a_m << endl;
	}
	void Print() {
		cout << "a_x=" << a_x << " " << "a_m=" << a_m << endl;
	}
	int getM() {
		return a_m;
	}
private:
	int a_x;
	const int a_m;
};

//类的成员里有类或const类型则必须初始化
class B
{
public:
	//这里的拷贝构造的顺序只与定义的属性的先后顺序有关，与初始列表的顺序无关
	B(A &oa1,A& oa2):objA1(oa1,oa1.getM()),objA2(oa2,oa2.getM()),objA3(30,3)
	{
		oa1.Print();
		oa2.Print();
	}

private:
	A objA2;
	A objA3;
	A objA1;
	
};



int main() {
	
	/*
	当A的对象 是B类的一个成员的时候，在初始化B对象的时候，无法给B分配空间，因为无法初始化A类对象
	*/
	A objA1(10,1), objA2(20,2);
	B objB(objA1,objA2);
}