#include <iostream>
using namespace std;

//������������ص㣺��װ���̳С���̬

/*
Public���γ�Ա�����ͳ�Ա��������������ڲ�������ⲿ�����ʡ�
Private���γ�Ա�����ͳ�Ա����ֻ��������ڲ������ʡ�
*/
//��c++��class��struct��ȣ���֮ͬ������class��Ĭ�Ϸ���Ȩ����private��struct�ķ���Ȩ����public����struct�п���д����
class Date1
{
//{}����������ڲ���{}����������ⲿ
public:
	void init(Date1& d);

	void print() {
		cout << year << "." << month << "." << day << endl;
	}
//protected�ڵ����������ú�privateһ���������ڼ̳���������
//���private���Բ�д��Ĭ����private
private:
	//��������ββ�Ҫ���������ͬ��
	int year;
	int month;
	int day;
};

struct Date2 {
	void init() {
		cout << "year: " << endl;
		cin >> year;
	}
	void print() {
		cout << year << endl;
	}
private:
	int year;
	
};

void Date1::init(Date1& d) {
	cout << "year,month,day: " << endl;
	cin >> d.year >> d.month >> d.day;
}

int main() {
	Date1 d;
	Date2 d2;
	d2.init();
	d2.print();
	d.init(d);
	d.print();
	return 0;
}