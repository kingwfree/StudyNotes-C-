#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
	//const;����һ��Ҫ�ڳ�ʼ���׶θ�ֵ
	A(int a, int m):a_m(m)
	{
		a_x = a;
		cout << "�в�A..." << a_x << " " << a_m << endl;
	}
	A(const A& a,int m):a_m(m)
	{
		a_x = a.a_x;
		cout << "��������A..." << a_x  << " " << a_m << endl;
	}
	void Print() {
		cout << "a_x=" << a_x << " " << "a_m=" << a_m << endl;
	}
	int getM() {
		return a_m;
	}
private:
	int a_x;
	const int a_m;
};

//��ĳ�Ա�������const����������ʼ��
class B
{
public:
	//����Ŀ��������˳��ֻ�붨������Ե��Ⱥ�˳���йأ����ʼ�б��˳���޹�
	B(A &oa1,A& oa2):objA1(oa1,oa1.getM()),objA2(oa2,oa2.getM()),objA3(30,3)
	{
		oa1.Print();
		oa2.Print();
	}

private:
	A objA2;
	A objA3;
	A objA1;
	
};



int main() {
	
	/*
	��A�Ķ��� ��B���һ����Ա��ʱ���ڳ�ʼ��B�����ʱ���޷���B����ռ䣬��Ϊ�޷���ʼ��A�����
	*/
	A objA1(10,1), objA2(20,2);
	B objB(objA1,objA2);
}