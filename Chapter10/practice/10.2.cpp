#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);
	if(!in){
		cout << "读取文件失败" << endl;
		exit(1);
	}

	list<string> ls;
	string word;

	while(in >> word){
		ls.push_back(word);
	}

	cout << "请输入要搜索的字符串: " << endl;
	cin >> word;

	cout << "序列中包含" << count(ls.begin(), ls.end(), word) << "个" << word;
	return 0;
}