#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	const int sz = 10;	// 常量 sz 作为数组的维度
	int a[sz];
	// 通过 for 循环为数组元素赋值
	for (int i = 0; i < sz; ++i)
	{
		a[i] = i;
	}
	// 通过范围 for 循环输出数组的全部元素
	for(auto val : a)
	{
		cout << val << " ";
	}
	cout << endl;
	return 0;
}