#include <iostream>

/*
c 语言中枚举本质就是整型,枚举变量可以用任意整型赋值。而 c++中枚举
变量, 只能用被枚举出来的元素初始化。
*/

using namespace std;

enum season {SPR,SUM,AUT,WIN};

int main() {
	enum season s = SPR;
	//s = 0; //error,但是C语⾔可以通过
	s = SUM;
	cout << "s=" << s << endl;
	return 0;
}