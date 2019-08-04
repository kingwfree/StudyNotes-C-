#include <iostream>

using namespace std;

/*
C++中的类可以定义与类名相同的特殊成员函数，这种与类名相同的成员
函数叫做构造函数
1 在对象创建时自动调用,完成初始化相关工作。
2 无返回值,与类名同,默认无参,可以重载,可默认参数。
3 一经实现,默认不复存在。
class 类名{
	类名(形式参数){
		构造体
	}
}

C++中的类可以定义一个特殊的成员函数清理对象，这个特殊的成员函数
叫做析构函数.
1 对象销毁时,自动调用。完成销毁的善后工作。
2 无返值 ,与类名同。无参。不可以重载与默认参数
class 类名
{
	~类名()	{
		析构体
	}
}

析构函数和构造函数都没有返回值
*/
class A {
public:
	//如果不写构造函数或析构函数的话，编译器会提供默认的析构函数和无参构造函数
	/*
	默认构造函数
		A(){}
	*/
	//构造函数可以被函数重载
	//有参数构造函数
	A(int x) {
		a = x;
		b = 0;
	}
	A(int x, int y) {
		a = x;
		b = y;
	}
	//无参数构造函数
	A() {
		a = 0;
		b = 0;
		name = (char*)malloc(100);
	}

	int getA() {
		return a;
	}
	int getB() {
		return b;
	}

	//析构没有形参
	~A() {
		cout << "~A...." << endl;
		if (name != NULL) {
			free(name);
			cout << "free name" << endl;
		}
			
	}
private:
	int a, b;
	char* name;
};


int main() {
	//调用无参数构造函数
	A a;
	cout << a.getA() << " " << a.getB() << endl;
	
	//调用有参数构造函数
	A b(10,20);
	cout << b.getA() << " " << b.getB() << endl;

	return 0;
}