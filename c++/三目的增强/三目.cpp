#include <iostream>

using namespace std;

int main() {
	int a = 10,
		b = 20;
	/*
	    C���Է��ر�����ֵ C++�����Ƿ��ر�������
		C�����е���Ŀ��������ص��Ǳ���ֵ��������Ϊ��ֵʹ��
		C++�е���Ŀ�������ֱ�ӷ��ر���������˿��Գ����ڳ�����κεط�
	*/
	(a < b ? a : b) = 30;
	printf("a=%d b=%d", a, b);
	return 0;
}