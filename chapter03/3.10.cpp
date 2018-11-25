#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// 方案一
int main(int argc, char const *argv[])
{
	string s;
	cout << "请输入一个字符串, 最好含有某些标点符号: " << endl;
	getline(cin, s);
	for(auto c : s)
	{
		if(!ispunct(c))	// c不是标点符号
		{
			cout << c;
		}
	}
	cout << endl;
	return 0;
}

// 方案二 
int main(int argc, char const *argv[])
{
	string s, result;
	cout << " 请输入一个字符串，最好含有某些标点符号: " << endl;
	getline(cin, s);
	for(decltype(s.size()) i = 0; i < s.size(); i++){
		if(!ispunct(s[i])){
			result += s[i];
		}
	}
	cout << result << endl;
	return 0;
}