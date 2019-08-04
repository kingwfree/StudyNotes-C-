#include <iostream>

using namespace std;

int main() {
	int a = 10,
		b = 20;
	/*
	    C语言返回变量的值 C++语言是返回变量本身
		C语言中的三目运算符返回的是变量值，不能作为左值使用
		C++中的三目运算符可直接返回变量本身，因此可以出现在程序的任何地方
	*/
	(a < b ? a : b) = 30;
	printf("a=%d b=%d", a, b);
	return 0;
}