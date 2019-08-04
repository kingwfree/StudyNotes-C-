#include <iostream>

//引用的语法：Type& name = var; 
/*
变量名，本身是一段内存的引用，即别名(alias). 
引用可以看作一个已定义变量的别名。
*/


using namespace std;

struct	Teacher
{
	char	name[64];
	int	age;
};

struct	Student {
	int& a;
	int& b;
};

/*
普通引用在声明时必须用其它的变量进行初始化，引用作为函数参数声
明时不进行初始化。

 引用的意义
1）引用作为其它变量的别名而存在，因此在一些场合可以代替指针
2）引用相对于指针来说具有更好的可读性和实用性
*/
void	printfT(Teacher* pT)
{
	cout << pT->age << endl;
}
//pT是t1的别名	,相当于修改了t1
void	printfT2(Teacher& pT)
{
	pT.age = 33;
	cout << "有引用" << pT.age << endl;
}
//pT和t1的是两个不同的变量
void	printfT3(Teacher	pT)
{
	cout << pT.age << endl;
	pT.age = 45;	//只会修改pT变量	,不会修改t1变量
	cout << "无引用" << pT.age << endl;
}


/*
当实参传给形参引用的时候，只不过是c++编译器帮我们程序员手工取了
一个实参地址，传给了形参引用（常量指针）。
*/
void func1(int& a)
{
	a = 5;
	
}
void func2(int* const a)
{
	*a = 5;
}

int main() {
	int q, r = 2;

	//1、声明的时候必须初始化,一经声明,不可变更。
	int& w = q;


	/*
	2、引用没有定义,是一种关系型声明。声明它和原有某一变量(实体)的关系。
	故而类型与原类型保持一致,且不分配内存。与被引用的变量有相同的地址。
	*/
	bool flag = &w == &q;
	cout << "flag=" << flag << endl; //1

	w = 4;
	printf("q=%d,w=%d\n", q, w);


	//3、可对引用,再次引用。多次引用的结果,是某一变量具有多个别名。
	int& w1 = w;
	int& w2 = w;
	int& w3 = w2;
	w3 = 20;
	cout << "w=" << w << "w1=" << w1 << "w2=" << w2 << "w3=" << w3 << endl;

	//4、 &符号前有数据类型时,是引用。其它皆为取地址。

	//声明常引用，不允许改变b的值
	const int& t = r;
	//int const x = 40;
	//int& y = x; //error

	//t = 5; //错误，t不能被赋值

	/*
	在以表达式的形式对常引用进行声明时，
	系统将自动生成一个临时变量，用这个临时变量存表达的值，
	之后常引用实是这个临时变量的引用。
	*/
	int temp = q + 7;
	const int& u = temp;
	printf("u=%d\n", temp);

	Teacher	t1;
	t1.age = 35;
	printfT(&t1);
	printfT2(t1);	//pT是t1的别名
	printf("t1.age:%d \n", t1.age);	//33
	printfT3(t1);//	pT是形参	,t1	copy⼀份数据 给pT
	printf("t1.age:%d \n", t1.age);	//33

	/*
	1）引用在C++中的内部实现是一个常指针
		Type& name <===> Type* const name
		（int	&a => int* const a）
	2）C++编译器在编译过程中使用常指针作为引用的内部实现，
	因此引用所占用的空间大小与指针相同。
	*/
	printf("sizeof(Student)	%d\n", sizeof(Student));//32位就是8 64位就是16

	int x1,x2;
	func1(x1);
	func2(&x2);

	cout << "x1=" << x1 << " " << "x2=" << x2 << endl;


	return 0;
}