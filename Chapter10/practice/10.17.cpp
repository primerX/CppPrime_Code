#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);
	if(!in){
		cout << "打开输入文件失败" << endl;
		exit(1);
	}

	vector<Sales_data> sds;
	Sales_data sd;
	while(in >> sd){
		sds.push_back(sd);
	}

	sort(sds.begin(), sds.end(), 
		 [] (const Sales_data &lhs, const Sales_data &rhs)
		 	{return lhs.isbn() < rhs.isbn(); });

	for(const auto &s : sds){
		print(cout, s);
		cout << endl;
	}
	return 0;
}