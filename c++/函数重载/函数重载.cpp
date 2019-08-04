#include <iostream>
using namespace std;
/*
函数重载
用用一个函数名定义不同的函数，当函数名和不同的参数搭配时函数的含义不同

重载规则
1,函数名相同。
2,参数个数不同,参数的类型不同,参数顺序不同,均可构成重载。
3,返回值类型不同则不可以构成重载。

void func(int a);//ok
void func(char a);//ok
void func(char a,int b);//ok
void func(int a, char b);//ok
char func(int a);//与第一个函数有冲突

函数重载与函数默认参数
一个函数,不能既作重载,又作默认参数的函数。当你少写一个参数时,系统
无法确认是重载还是默认参数。
int	func(int a,	int	b,int c = 0);
int	func(int a,	int	b);
*/


//函数重载与函数指针结合

//函数指针

//1、声明一个函数类型
typedef int(FN)(int,int);//定义一种有两个都int型参数，返回值是int型的函数类型
//2、声明一个函数指针类型
typedef int(*PF)(int);   //定义一种有一个int型参数，返回值为int型的函数的指针



int func(int a,int b) {
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return a;
}
int func(int a) {
	cout << "a=" << a << endl;
	return a;
}

int main() {
	FN* f = func;
	f(10, 20);
	PF pf = func;
	pf(30);
	//3、定义一个函数指针变量
	int(*VarPF)(int, int)=NULL;
	VarPF = func;
	VarPF(50, 60);
	return 0;
}

