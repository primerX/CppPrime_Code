#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void find_longest_word(ifstream &in)
{
	string s, longest_word;
	int max_length = 0;

	while(in >> s)
	{
		// 包含上出头或下出头字符
		if(s.find_first_of("bdfghjklpqty") != string::npos){
			continue;
		}
		cout << s << " ";
		if(max_length < s.size()){		// 新单词更长
			max_length = s.size();
			longest_word = s;
		}
	}
	cout << endl << "最长字符串: " << longest_word << endl;
}

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);		//打开文件
	if(!in){
		cerr << "无法打开输入文件" << endl;
		return -1;
	}
	find_longest_word(in);
	return 0;
}