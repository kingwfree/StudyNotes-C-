/*
	C语⾔的struct定义了⼀组变量的集合,C编译器并不认为这是⼀种新的类型
	C++中的struct是⼀个新类型的定义声明
*/

#include <iostream>

struct Teacher
{
	char name[20];
	int age;
};

int main() {
	Teacher t = { 'a',30 };
	return 0;
}