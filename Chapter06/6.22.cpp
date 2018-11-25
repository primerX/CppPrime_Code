#include <iostream>

using namespace std;

// 该函数既不交换指针，也不交换指针所指的内容
void swapPointer1(int *p, int *q)
{
	int *temp = p;
	p = q;
	q = temp;
}

// 该函数交换指针所指的内容
void swapPointer2(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

// 该函数交换指针所指的内存地址
void swapPointer3(int *&p, int *&q)
{
	int *temp = p;
	p = q;
	q = temp;
}