#include <iostream>
using namespace std;

int iCount(initializer_list<int> il)
{
	int count = 0;
	// 遍历 il 的每一个元素
	for(auto val : il)
	{
		cout += val;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	// 使用列表初始化的方式构建 initializer_list<int> 对象
	// 然后把它作为实参传递给函数 iCount
	cout << "1, 6, 9 的和是: " << iCount({1, 6, 9}) << endl;
	cout << "4, 5, 9, 18 的和是: " << iCount({4, 5, 9, 18}) << endl;
	return 0;
}