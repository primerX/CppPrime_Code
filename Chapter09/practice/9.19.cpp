#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
	list<string> sl;		// string 的 list

	string word;
	while(getline(cin, word)){	// 读取字符串，直至遇到文件结束符
		sl.push_back(word);
	}

	// 用 cbegin() 获取 list 首元素迭代器, 遍历 list 中的所有元素
	for(auto it = sl.cbegin(); it != s1.cend(); it++){
		cout << *it << endl;
	}
	return 0;
}