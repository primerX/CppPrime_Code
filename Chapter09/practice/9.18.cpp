#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
	deque<string> sd;		// string 的 deque
	string word;
	while(getline(cin, word)){	// 读取字符串，直至文件结束符
		sd.push_back(word);
	}

	// 用 cbegin() 获取 deque 首元素迭代器, 遍历 deque 中所有元素
	for(auto si = sd.cbegin(); si != sd.cend(); si++){
		cout << *si << endl;
	}
	return 0;
}