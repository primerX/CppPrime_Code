#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	if(argc != 4){
		cout << "用法: exercise.exe in_file "
				"out_file1 out_file2" << endl;
		return -1;
	}
	ifstream in(argv[1]);
	if(!in){
		cout << "打开输入文件失败" << endl;
		exit(1);
	}
	ofstream out1(argv[2]);
	if(!out1){
		cout << "打开输出文件 1 失败" << endl;
		exit(1);
	}
	ofstream out2(argv[3]);
	if(!out2){
		cout << "打开输出文件 2 失败" << endl;
		exit(1);
	}

	// 创建流迭代器从文件读入整数
	istream_iterator<int> in_iter(in);
	// 尾后迭代器
	istream_iterator<int> eof;

	// 第一个输出文件以空格分隔整数
	ostream_iterator<int> out1_iter1(out1, " ");
	// 第二个输出文件以换行分隔整数
	ostream_iterator<int> out2_iter2(out2, "\n");

	while(in_iter != eof){
		if(*in_iter & 1){		// 奇数
			*out1_iter1++ = *in_iter;
		}else{
			*out2_iter2++ = *in_iter;
		}
		in_iter++;
	}
	return 0;
}