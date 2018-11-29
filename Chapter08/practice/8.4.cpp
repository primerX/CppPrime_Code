#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in("data");		//打开文件
	if(!in){
		cerr << "无法打开文件" << endl;
		return -1;
	}

	string line;
	vector<string> words;
	while(getline(in, line)){		// 从文件中读取一行
		words.push_back(line);		// 添加到 vector 中
	}

	in.close();		// 输入完毕，关闭文件

	vector<string>::const_iterator it = words.begin();	//迭代器
	while(it != words.end()){		//遍历 vector
		cout << *it << endl;
		++it;
	}
	return 0;
}