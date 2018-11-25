#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cout << "请输入一个字符串, 可以包含空格: " << endl;
	getline(cin, s);	// 整行读取，遇到回车符结束
	for(auto &c : s)	// 一次处理字符串中的每一个字符
	{
		c = 'X';
	}
	cout << s << endl;
	return 0;
}