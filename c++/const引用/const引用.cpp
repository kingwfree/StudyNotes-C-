#include <iostream>

using namespace std;

/*
const int & e 相当于 const int * const e
普通引用 相当于 int *const e
*/

int main() {

	/*
	const 对象的引用必须是 const 的,将普通引用绑定到 const 对象是不合法的。
	const int a = 1;
	int& b = a;
	*/

	//const 引用可使用相关类型的对象(常量,非同类型的变量或表达式)初始化。
	//c++编译器会分配内存空间
	//int temp = 2
    //const int& a = temp;
	const int& a = 2;
	const int& b = a;
	//常引⽤是限制变量为只读 不能通过y去修改x了
	int	x = 20;
	const int& y = x;

	//ref是const的,在初始化的过程中已经给定值,c++编译器把ref放在符号表中,不允许修改。

	double	val = 3.14;
	const int& ref = val;
	double& ref2 = val;
	cout << ref << " " << ref2 << endl; //3 3.14
	val = 4.14;
	cout << ref << " " << ref2 << endl; //3 4.14

	return 0;
}