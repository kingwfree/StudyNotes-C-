#include <iostream>
using namespace std;
/*
��������
����һ�����������岻ͬ�ĺ��������������Ͳ�ͬ�Ĳ�������ʱ�����ĺ��岻ͬ

���ع���
1,��������ͬ��
2,����������ͬ,���������Ͳ�ͬ,����˳��ͬ,���ɹ������ء�
3,����ֵ���Ͳ�ͬ�򲻿��Թ������ء�

void func(int a);//ok
void func(char a);//ok
void func(char a,int b);//ok
void func(int a, char b);//ok
char func(int a);//���һ�������г�ͻ

���������뺯��Ĭ�ϲ���
һ������,���ܼ�������,����Ĭ�ϲ����ĺ�����������дһ������ʱ,ϵͳ
�޷�ȷ�������ػ���Ĭ�ϲ�����
int	func(int a,	int	b,int c = 0);
int	func(int a,	int	b);
*/


//���������뺯��ָ����

//����ָ��

//1������һ����������
typedef int(FN)(int,int);//����һ����������int�Ͳ���������ֵ��int�͵ĺ�������
//2������һ������ָ������
typedef int(*PF)(int);   //����һ����һ��int�Ͳ���������ֵΪint�͵ĺ�����ָ��



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
	//3������һ������ָ�����
	int(*VarPF)(int, int)=NULL;
	VarPF = func;
	VarPF(50, 60);
	return 0;
}

