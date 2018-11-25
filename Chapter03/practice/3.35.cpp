#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	const int sz = 10;		// 常量 sz 作为数组的维度
	int a[sz], i = 0;
	// 通过 for 循环为数组元素赋值
	for(int i = 0; i < sz; i++)
	{
		a[i] = i;
	}
	cout << "初始状态下数组的内容是: " << endl;
	for(auto val : a)
	{
		cout << val << " ";
	}
	cout << endl;
	int *p = begin(a);		// 令 p 指向数组的首元素
	while(p != begin(a))
	{
		*p = 0;		// 修改 p 所指元素的值
		p++;		// p 向后移动一位
	}
	cout << "修改后的数组内容是: " << endl;
	for(auto val : a)
	{
		cout << val << " ";
	}
	cout << endl;
	return 0;
}