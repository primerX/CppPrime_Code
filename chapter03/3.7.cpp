// 就本题而言将 auto 换成 char
// 不会程序运行结果造成影响
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cout << "请输入一个字符串: " << endl
	getline(cin, s);
	for(char &c : s)
	{
		c = 'X';
	}
	cout << s << endl;
	return 0;
}