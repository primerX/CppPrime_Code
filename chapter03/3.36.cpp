#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// 比较两个数组是否相等
int main(int argc, char const *argv[])
{
	const int sz = 5;		// 常量 sz 作为数组的维度
	int a[sz], b[sz], i = 0;
	srand( (unsigned) time (NULL));	// 生成随机数种子
	// 通过 for 循环为数组元素赋值
	for(int i = 0; i < sz; i++)
	{
		// 每次循环生成一个 10 以内的随机数并添加到 a 中
		a[i] = rand() % 10;
	}
	cout << "系统数据已经生成，请输入您猜测的 5 个数字(0~9), 可以重复: " << endl;
	int uVal;
	// 通过 for 循环为数组元素赋值
	for(int i = 0; i < sz; i++)
	{
		cin >> uVal;
		b[i] = uVal;
	}
	cout << "系统生成的数据: " << endl;
	for(auto val : a)
	{
		cout << val << " ";
	}
	cout << endl;
	// 令 p 和 q 分别指向数组 a 和 b 的首元素
	int *p = begin(a), *q = begin(b);
	while(p != end(a) && q != end(b))
	{
		if(*p != *q)
		{
			cout << "您猜测错误，两个数组不相等" << endl;
			return -1;
		}
		p++;
		q++;
	}
	cout << "恭喜您全部猜对!" << endl;
	return 0;
}