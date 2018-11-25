#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> vString;		// 元素类型为 string 的 vector 对象
	string s;
	char cont = 'y';
	cout << "请输入第一个词: " << endl;
	while(cin >> s)
	{
		vString.push_back(s);	// 向 vector 对象中添加元素
		cout << "您想继续吗(y or n) ? " << endl;
		cin >> cont;
		if(cont != 'y' && cont != 'Y'){
			break;
		}else{
			cout << "请输入下一个词: " << endl;
		}
	}
	cout << "转换后的结果是: " << endl;
	for(auto &mem : vString)
	{
		for(auto &c : mem)
		{
			c = toupper(c);		// 改为大写字母
		}
		cout << mem << endl;
	}
	return 0;
}