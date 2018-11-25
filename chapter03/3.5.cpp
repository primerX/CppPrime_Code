#include <iostream>
#include <string>

using namespace std;

// 连接多个字符串的程序如下
int main(int argc, char const *argv[])
{
	char cont = 'y';
	string s, result;
	cout << "请输入第一个字符串: " << endl;
	while(cin >> s)
	{
		result += s;
		cout << "是否继续(y or n) ? " << end;
		cin >> cont;
		if(cont == 'y' || cont == 'Y'){
			cout << "请输入下一个字符串: " << endl;
		}else{
			break;
		}
	}
	cout << "拼接之后的字符串是: " << result << endl;
	return 0;
}

// 连接多个字符串并以空格分隔的程序
int main(int argc, char const *argv[])
{
	char cont = 'y';
	string s, result;
	cout << "请输入第一个字符串: " << endl;
	while(cin >> s){
		if(!result.size()){		//第一个拼接的字符串之前不加空格
			result += s;
		}else{
			result = result + " " + s;
		}
		cout << "是否继续(y or n)?" << endl;
		cin >> cont;
		if(cont == 'y' || cont == 'Y'){
			cout << "请输入下一个字符串" << endl;
		}else{
			break;
		}
	}
	cout << "拼接之后的字符串是: " << result << endl;
	return 0;
}