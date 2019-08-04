#include <iostream>

using namespace std;

class A {
public:
	//������Ĳ�����ͬһ�����ʵ������ʱ�������ÿ���ȡ�����������˽������
	/*
	Ĭ�ϵĿ�������
	A(const A& b) {
		x = b.x;
		y = b.y;
	}

	��ֵ����������
	

	*/
	A() {}
	void operator=(const A& b) {
		cout << "operator" << endl;
		x = b.x;
		y = b.y;
	}
	A(const A& b) {
		x = b.x;
		y = b.y;
		//b.getY(); //error
	}
	void setXY(int X, int Y) {
		x = X;
		y = Y;
	}
	int getbX(const A& b) {
		//��ȡ����b�ķ���getY,ȥ��const���Ի�ȡ��b�ķ���
		return b.x;
	}
	int getY() {
		return y;
	}

private:
	int x, y;
};

class B {
public:
	//��ȡ����a��˽������
	B(A& a) {
		y = a.getY();
		cout << "b:" << y << endl;
	}
	int getY() {
		return y;
	}
private:
	int y;
};

void Print(A& a) {
	// �βΣ�A& a
	//a.getY(); //ok

	//�βΣ�const A& a
	//a.getY(); //error
}

int main() {
	A a;
	a.setXY(1, 2);

	//���ֵ��ÿ������캯���ķ�ʽ
	A aa(a);
	A aaa = a;

	//���ַ�ʽ���õĲ��ǿ������캯�������õ���aaaa�ĸ�ֵ����������
	A aaaa;
	aaaa = a;

	B b(a);
	cout << b.getY() << endl;
	return 0;
}