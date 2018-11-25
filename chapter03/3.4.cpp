#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s1, s2;
	cout << "请输入两个字符串: " << endl;
	if(s1 == s2){
		cout << "两个字符串相等" << endl;
	}else if(s1 > s2){
		cout << s1 << " 大于 " << s2 << endl;
	}else {
		cout << s2 << " 大于 " << s2 << endl;
	}
	return 0;
}

