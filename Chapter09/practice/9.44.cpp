#include <iostream>
#include <vector>
#include <string>
using namespace std;

void replace_string(string &s, const string &oldVal, const string &newVal)
{
	int p = 0;
	while((p = s.find(oldVal, p)) != string::npos){		// 在 s 中查找 oldVal
		s.replace(p, oldVal.size(), newVal);		// 将找到的子串替换为 newVal 的内容
		p += newVal.size();		// 下标调整到新插入内容之后
	}
}

int main(int argc, char const *argv[])
{
	string s = "tho thru tho!";
	replace_string(s, "thru", "through");
	cout << s << endl;
	return 0;
}