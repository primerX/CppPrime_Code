#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);
	if(!in){
		cout << "打开输入文件失败" << endl;
		exit(1);
	}
	map<string, size_t> word_count;		// string 到 count 的映射
	string word;
	while(in >> word){
		word_count[word]++;			// 这个单词出现的次数加 1
	}

	for(auto iter = word_count.begin(); iter != word_count.end(); iter++){
		cout << iter->first << " 出现了 " << iter->second << " 次 "<<endl;
	}
	for(const auto & w : word_count){
		cout << w.first << " 出现了" << w.second << " 次" << endl;
	}
	return 0;
}