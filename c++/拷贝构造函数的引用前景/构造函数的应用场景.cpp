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

void fn(S s) //�������� S s = s;
{

}

A fn1() {
	cout << "fn1 begin..." << endl;
	A a(2);
	cout << "fn1 end..." << endl;
	/*
	������ֵ��һ��ʵ������ʱ�����صľͻ���һ���µ���������
	��������������Ŀ������캯����
	����������Ŀ�������ִ�кú�ԭ�����ִ������

	��������ⲿû���κα���������������������󽫲����ٱ�ʹ�ã��������Ὣ�������������յ���
	�����ǵȴ���������ִ������ٻ���
	��������ⲿ���κα��������������Ϊ2�������
		1����������������ʼ����һ��ͬ���͵Ķ�������������ת��������������Ϊ��Ҫ��ʼ���Ķ���
		�����������������죬ֱ���޸����ƣ�
		2���������������ֵ����һ��ͬ���͵Ķ�����������������
	*/
	return a;
}


int main() {
	/*
	������������˳���ȵ��ù����ʵ�����󣬺�����
	*/
	S s(1);
	MyClass m(s);
	fn(s);
	//A aa = fn1();
	fn1();
	return 0;
}