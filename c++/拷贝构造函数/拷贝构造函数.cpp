#include <iostream>

using namespace std;

class A {
public:
	//当传入的参数是同一个类的实例对象时，用引用可以取到传入参数的私有属性
	/*
	默认的拷贝函数
	A(const A& b) {
		x = b.x;
		y = b.y;
	}

	赋值操作符函数
	

	*/
	A() {}
	void operator=(const A& b) {
		cout << "operator" << endl;
		x = b.x;
		y = b.y;
	}
	A(const A& b) {
		x = b.x;
		y = b.y;
		//b.getY(); //error
	}
	void setXY(int X, int Y) {
		x = X;
		y = Y;
	}
	int getbX(const A& b) {
		//获取不到b的方法getY,去掉const可以获取到b的方法
		return b.x;
	}
	int getY() {
		return y;
	}

private:
	int x, y;
};

class B {
public:
	//获取不到a的私有属性
	B(A& a) {
		y = a.getY();
		cout << "b:" << y << endl;
	}
	int getY() {
		return y;
	}
private:
	int y;
};

void Print(A& a) {
	// 形参：A& a
	//a.getY(); //ok

	//形参：const A& a
	//a.getY(); //error
}

int main() {
	A a;
	a.setXY(1, 2);

	//两种调用拷贝构造函数的方式
	A aa(a);
	A aaa = a;

	//这种方式调用的不是拷贝构造函数，调用的是aaaa的赋值操作符函数
	A aaaa;
	aaaa = a;

	B b(a);
	cout << b.getY() << endl;
	return 0;
}