#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;
/*
���ڶ��ϵ����ݣ�ǳ����ֱ��ʹ��Դ��ַ��������򿪱��µĿռ�����ݿ�������
*/
class A
{
public:
	//���������const
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
	//��ʾ���ṩһ���������캯����������������
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

	//����������Զ���Ŀ������캯��
	A aa(a);

	//ǳ����������Ĭ�Ͽ������캯��
	//aa = a;
	return 0;
}