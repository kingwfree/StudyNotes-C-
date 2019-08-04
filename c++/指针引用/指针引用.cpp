#include <iostream>

using namespace	std;

struct Teacher
{
	char name[64];
	int	age;
};

//二级指针
int getTeacher1(Teacher** p) {
	Teacher* tmp = NULL;
	if (p == NULL)return -1;
	tmp = (Teacher*)malloc(sizeof(Teacher));
	if (tmp == NULL)return -2;
	tmp->age = 33;
	*p = tmp;
	return 0;
}

//指针引用
int getTeacher2(Teacher*& p) {
	p = (Teacher*)malloc(sizeof(Teacher));
	if (p == NULL)return -2;
	p->age = 36;
	return 0;
}

int main() {

	Teacher* pT = NULL;
	getTeacher1(&pT);
	cout << "age=" << pT->age << endl;
	getTeacher2(pT);
	cout << "age=" << pT->age << endl;
	return 0;
}