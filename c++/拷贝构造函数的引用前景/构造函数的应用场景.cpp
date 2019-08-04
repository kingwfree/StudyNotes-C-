#include <iostream>

using namespace std;

class A
{
public:
	A(int X) {
		cout << "A..." << endl;
		x = X;
	}
	A(const A& s) {
		cout << "const A..." << endl;
	}
	~A() {
		cout << "~A..." << endl;
	}

private:
	int x;
};

class S
{
public:
	S(int X) {
		cout << "S..." << endl;
		x = X;
	}
	S(const S& s){
		cout << "const S..." << endl;
	}
	~S() {
		cout << "~S..." << endl;
	}

private:
	int x;
};

class MyClass
{
public:
	MyClass(const S& s);
	~MyClass();
};

MyClass::MyClass(const S& s)
{
	cout << "const MyClass..." << endl;
}

MyClass::~MyClass()
{
	cout << "~MyClass..." << endl;
}

void fn(S s) //拷贝构造 S s = s;
{

}

A fn1() {
	cout << "fn1 begin..." << endl;
	A a(2);
	cout << "fn1 end..." << endl;
	/*
	当返回值是一个实例对象时，返回的就会是一个新的匿名对象
	匿名对象会调用类的拷贝构造函数。
	当匿名对象的拷贝构造执行好后，原对象会执行析构

	如果函数外部没有任何变量接受它，这个匿名对象将不会再被使用，编译器会将这个匿名对象回收掉，
	而不是等待整个函数执行完毕再回收
	如果函数外部有任何变量接受它，则分为2种情况：
		1、如果用匿名对象初始化另一个同类型的对象，则匿名对象转成有名对象，名称为所要初始化的对象
		（即不发生拷贝构造，直接修改名称）
		2、如果用匿名对象赋值给另一个同类型的对象，则匿名对象被析构
	*/
	return a;
}


int main() {
	/*
	析构函数调用顺序，先调用构造的实例对象，后析构
	*/
	S s(1);
	MyClass m(s);
	fn(s);
	//A aa = fn1();
	fn1();
	return 0;
}