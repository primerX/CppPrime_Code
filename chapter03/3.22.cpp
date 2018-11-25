#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> text;
	string s;
	// 利用 getline 读取一句话，直接回车产生一个空串，表示段落结束
	while(getline(cin, s))
	{
		text.push_back(s);		// 将 s 逐个添加到 text 中
	}
	// 利用迭代器遍历全部字符串, 遇到空串停止
	for(auto it = text.begin(); it != text.end() && !it->empty(); it++)
	{
		// 利用迭代器遍历当前字符串
		for(auto it2 = it->begin(); it2 != it->end(); it2++)
		{
			*it2 = toupper(*it2);		// 利用 toupper 改写成大写形式
		}
		// 输出当前字符串
		cout << *it << endl;
	}
	return 0;
}