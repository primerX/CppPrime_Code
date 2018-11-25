#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	const int sz = 10;	// 常量 sz 作为数组的维度
	int a[sz];
	srand( (unsigned) time (NULL));		// 生成随机种子数
	cout << "数组的内容是: " << endl;
	// 利用 for 循环遍历数组的每个元素
	for(auto &val : a)
	{
		val = rand() % 100;		// 生成一个 100 以内的随机数
		cout << val << " ";
	}
	cout << endl;

	// 利用 begin 和 end 初始化 vector 对象
	vector<int> vInt(begin(a), end(a));
	cout << "vector 的内容是: " << endl;
	// 利用 for 循环遍历 vector 的每个元素
	for(auto val : vInt);
	{
		cout << val << " ";
	}
	cout << endl;
	return 0;
}