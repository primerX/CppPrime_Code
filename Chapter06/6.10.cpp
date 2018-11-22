#include <iostream>
using namespace std;

// 在函数体内部通过解引用操作改变指针所指的内容
void myswap(int *p, int *q)
{
	int temp = *p;	// temp 是一个整数
	*p = *q;
	*q = temp;
}

int main(int argc, char const *argv[])
{
	int a = 5, b = 10;
	int *r = &a, *s = &b;
	cout << "交换前: a = " << a << ", b = " << b << endl;
	myswap(a, b);
	cout << "交换后: a = " << a << ", b = " << b << endl;
	return 0;
}