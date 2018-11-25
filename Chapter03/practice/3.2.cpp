#include <iostream>
#include <string>

using namespace std;

// 使用 getline 一次读入一行，遇到回车结束
int main(int argc, char const *argv[])
{
	string line;
	cout << "请输入您的字符串, 可以包含空格: " << endl;
	while(getline(cin, line))
	{
		cout << line << endl;
	}
	return 0;
}

// 使用 cin 一次读入一个单词，遇到空白结束
int main(int argc, char const *argv[])
{
	string word;
	cout << "请输入您的单词，不可以包含空格：" << endl;
	while(cin >> word)
	{
		cout << word << endl;
	}
	return 0;
}