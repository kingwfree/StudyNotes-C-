#include <iostream>

using namespace std;

// 返回局部变量或临时变量的地址: a(这是非常危险的不要怎么做)
//不要把栈里的地址返回出去
int& get1() {
	int a;
	a = 10;
	return a;
}

//返回变量的值
int	func1()
{
	static int	a1 = 10;
	return	a1;
}
//返回变量本⾝	,	
int& func2()
{
	static int	a2 = 10;
	return	a2;
}


int main() {
	//将一个引用赋给一个变量，会有拷贝动作
	//理解： 编译器类似做了如下隐藏操作，a1	=	*(getA2())
	int a1 = get1();

	//将一个引用赋给另一个引用作为初始值，由于是栈的引用，内存非法
	int& a2 = get1();

	cout << "a2	=" << a2 << endl;
	cout << "a1	=" << a1 << endl;
	cout << "a2	=" << a2 << endl;

	/*
	当函数返回值为引用时,
	若返回静态变量或全局变量可以成为其他引用的初始值（可作为右值使用，也可作为左值使用）
	*/
	//func1() = 100; //error
	int c1 = func1();
	int& c2 = func2();
	cout << "c1	=" << c1 << endl;
	cout << "c2	=" << c2 << endl;
	func2() = 100;
	cout << "c2	=" << c2 << endl;

	return 0;
}