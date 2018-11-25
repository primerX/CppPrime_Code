#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	const int sz = 10;		// 使用 sz 作为数组的维度
	vector<int> vInt;
	srand( (unsigned) time (NULL));	// 生成随机数种子
	// 使用普通 for 循环为数组赋初值
	cout << "数组的初始值为: " << endl;
	for(int i = 0; i != sz; i++)
	{
		vInt.push_back(rand() % 100);	// 生成 100 以内的随机数
		cout << vInt[i] << " ";
	}
	cout << endl;
	// 使用范围 for 循环将数组中的奇数翻倍
	for(auto &val : vInt)
	{
		val = (val % 2 == 0) ? val * 2 : val;	// 条件表达式
	}
	// 使用范围 for 循环和迭代器输出数组的当前值
	for(auto it = vInt.cbegin(); it != vInt.cend(); it++)
	{
		cout << *it << " "l
	}
	cout << endl;
	return 0;
}