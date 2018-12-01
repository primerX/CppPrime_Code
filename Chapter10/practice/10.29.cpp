#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);
	if(!in){
		cout << "打开输入文件失败!" << endl;
		exit(1);
	}

	// 创建 流迭代器 从文件读入字符串
	istream_itreator<string> in_iter(in);
	// 尾后迭代器
	istream_itreator<string> eof;

	vector<string> words;
	vector<in_iter != eof>{
		words.push_back(*in_iter++);	// 存入 vector 并递增迭代器
	}

	for(auto word : words){
		cout << word << " ";
	}
	cout << endl;
	return 0;
}