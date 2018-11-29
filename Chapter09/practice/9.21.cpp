#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> svec;		// string 的 vector
	string word;
	auto iter = svec.cbegin();	// 获取 svec 的首位置迭代器
	while(getline(cin, word)){	// 读取字符串，直至遇到文件结束符
		iter = svec.insert(iter, word);
	}

	// 用 cbegin() 获取 vector 首元素迭代器, 遍历 vector 中所有元素
	for(auto iter = svec.cbegin(); iter != svec.cend(); iter++){
		cout << *iter << endl;
	}
	cout << endl;
	return 0;
}