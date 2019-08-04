#include <iostream>

using namespace std;

//如果默认参数出现，那么右边的都必须有默认参数
/*
 占位参数只有参数类型声明
 一般情况下，在函数体内部无法使用占用参数
*/

//C++可以声明占位参数符，占位参数一般用于程序扩展和对C代码的兼容
void Print(int b,int,int x = 3,int a = 4,int = 5) {
	cout << "x=" << x << endl;
}




int main() {
	Print(0,0);

	return 0;
}