#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vInt;		// 元素类型为 int 的 vector 对象
	srand((unsigned)time(NULL));	// 生成随机数种子
	for(int i = 0; i < 10; i++)		// 循环 10 次
	{
		// 每次循环生成一个 1000 以内的随机数并添加到 vInt 中
		vInt.push_back( rand() % 1000 );
	}
	cout << "随机生成的 10 个数字是: " << endl;
	// 利用常量迭代器读取原始数据
	for(auto it = vInt.cbegin(); it != vInt.cend(); it++)
	{
		cout << *it << " ";		// 输出当前数字
	}
	cout << endl;
	cout << "翻倍后的 10 个数字是: " << endl;
	// 利用非常量迭代器修改 vInt 内容并输出
	for(auto it = vInt.begin(); it != vInt.end(); it++)
	{
		*it *= 2;
		cout << *it << " ";		// 输出当前数字
	}
	cout << endl;
	return 0;
}