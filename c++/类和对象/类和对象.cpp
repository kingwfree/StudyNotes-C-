#include <iostream>
using namespace std;

//面向对象三大特点：封装、继承、多态

/*
Public修饰成员变量和成员函数可以在类的内部和类的外部被访问。
Private修饰成员变量和成员函数只能在类的内部被访问。
*/
//在c++中class和struct相比，不同之处在与class的默认访问权限是private而struct的访问权限是public，在struct中可以写方法
class Date1
{
//{}以内是类的内部，{}以外是类的外部
public:
	void init(Date1& d);

	void print() {
		cout << year << "." << month << "." << day << endl;
	}
//protected在单个类中作用和private一样，但是在继承中有区别
//这个private可以不写，默认是private
private:
	//方法里的形参不要和类的属性同名
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