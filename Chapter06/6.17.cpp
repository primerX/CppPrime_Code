#include <iostream>
#include <string>

using namespace std;

bool hasUpper(const string& str)	// 判断字符串中是否有大写字母
{
	for(auto c : str)
	{
		if(isupper(c))
		{
			return true;
		}
	}
	return false;
}

void changeToLower(string& str)		// 把字符串中的所有大写字母转换成小写
{
	for(auto &c : str)
	{
		if(isupper(c))
			c = tolower(c);
	}
}

int main(int argc, char const *argv[])
{
	cout << "请输入一个字符串: " << endl;
	string str;
	cin >> str;
	if(hasUpper(str))
	{
		changeToLower(str);
		cout << "转换后的字符串是: " << str << endl;
	}else{
		cout << "该字符串中不含大写字母，无需转换" << endl;
	}
	return 0;
}