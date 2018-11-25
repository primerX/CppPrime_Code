// for(auto c : s) 好
#include <iostream>
#include <string>

using namespace std;

// 使用 while 循环实现的程序如下所示
int main(int argc, char const *argv[])
{
	string s;
	cout << "请输入一个字符串，可以包含空格: " << endl
	getline(cin, s);
	int i = 0;
	while(s[i] != '\0')
	{
		s[i] = 'X';
		i++;
	}
	cout << s << endl;
	return 0;
}

// 使用传统的 for 循环实现的程序如下
int main(int argc, char const *argv[])
{
	string s;
	cout << "请输入一个字符串，可以包含空格: " << endl;
	getline(cin, s);
	for(unsigned int i = 0; i < s.size(); i++)
	{
		s[i] = 'X';
	}
	cout << s << endl;
	return 0;
}