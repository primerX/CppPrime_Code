#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	if(argc != 2){
		cout << "用法: exercise.exe in_file" << endl;
		return -1;
	}

	ifstream in(argv[1]);
	if(!in){
		cout << "打开输入文件失败!" << endl;
		exit(1);
	}

	vector<int> vi;
	int v;
	while(in >> v){
		vi.push_back(v);
	}

	for(auto r_iter = vi.cend(); r_iter != vi.cbegin(); r_iter--){
		cout << *(--r_iter) << " ";
	}
	cout << endl;
	return 0;
}