#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	// 创建流迭代器从标准输入读入整数
	istream_iterator<int> in_iter(cin);
	// 尾后迭代器
	istream_iterator<int> eof;

	vector<int> vi;
	while(in_iter != eof){
		vi.push_back(*in_iter++);
	}
	sort(vi.begin(), vi.end());
	// 输出流迭代器
	ostream_iterator<int> out_iter(cout, " ");
	copy(vi.begin(), vi.end(), out_iter);
	return 0;
}