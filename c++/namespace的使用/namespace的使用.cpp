#include <stdio.h>

namespace A
{
	int a = 0;
}
namespace B
{
	int a = 1;

	namespace C
	{
		struct Teacher
		{
			char name[10];
			int age;
		};
	}
}

int main() {
	using namespace A;
	//using namespace B;
	using B::C::Teacher;

	printf("a=%d\n", a);//0
	printf("a=%d\n", B::a);//1

	Teacher t1 = { "a",2 };
	B::C::Teacher t2 = { "a",3 };

	printf("t1.name	=	%s\n", t1.name);		//a
	printf("t1.age	=	%d\n", t1.age);			//2
	printf("t2.name	=	%s\n", t2.name);		//a
	printf("t2.age	=	%d\n", t2.age);			//3

	return 0;
}