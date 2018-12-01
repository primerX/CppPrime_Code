#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);
	if(!in){
		cout << "打开输入文件失败" << endl;
	}

	vector<int> vi;
	int val;
	while(in >> val){
		vi.push_back(val);
	}

	cout << "输入要搜索的整数: " << endl;
	cin >> val;
	cout << "序列中包含" << count(vi.begin(), vi.end(), val) << "个" << val;
	return 0;
}