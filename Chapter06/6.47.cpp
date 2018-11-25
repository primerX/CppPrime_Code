#include <iostream>
#include <vector>
using namespace std;

/*
  打开调试器是，每次递归调用 print 函数都会输出"vector 对象的大小是: 7"
  关闭调试器，程序只输出 vector 对象的内容，不输出其大小
*/

// 递归函数输出 vector<int> 的内容
void print(vector<int> vInt, unsigned index)
{
	unsigned sz = vInt.size();
	// 设置在此处输出调试信息
	#ifndef NDEBUG
	cout << "vector 对象的大小是: " << vInt.size() << endl;
	#endif // NDEBUG

	if(!vInt.empty() && index < sz)
	{
		cout << vInt[index] << endl;
		print(vInt, index + 1);
	}
}

int main(int argc, char const *argv[])
{
	vector<int> v = {1, 3, 5, 7, 9, 11, 13};
	print(v, 0);
	return 0;
}