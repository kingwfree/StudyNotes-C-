#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;
/*
对于堆上的数据，浅拷贝直接使用源地址，而深拷贝则开辟新的空间把数据拷贝过来
*/
class A
{
public:
	//这里必须有const
	A(int id,const char *name) {
		cout << "A" << endl;
		a_id = id;
		int len = strlen(name);
		a_name = (char*)malloc(len + 1);
		strcpy(a_name, name);
	}
	A() {
		cout << "A" << endl;
	}
	//显示的提供一个拷贝构造函数，来完成深拷贝动作
	A(const A& a) {
		a_id = a.a_id;
		int len = strlen(a.a_name);
		a_name = (char*)malloc(len+1);
		strcpy(a_name, a.a_name);
	}
	~A() {
		cout << "~A..." << endl;
		free(a_name);
		a_name = NULL;
	}
	void Print() {
		cout << a_id << ":" << a_name << endl;
	}
private:
	char* a_name;
	int a_id;
};

int main() {
	A a(1,"afei");
	//A a;
	a.Print();

	//深拷贝，调用自定义的拷贝构造函数
	A aa(a);

	//浅拷贝，调用默认拷贝构造函数
	//aa = a;
	return 0;
}