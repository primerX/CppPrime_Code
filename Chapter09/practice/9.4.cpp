#include <iostream>
#include <vector>
using namespace std;

bool search_vec(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
	for(; beg != end; beg++)		// 遍历范围
	{
		if(*beg == val){			// 检查是否与给定的值相等
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	vector<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8};
	cout << search_vec(ilist.begin(), ilist.end(), 3) << endl;
	cout << search_vec(ilist.begin(), ilist.end(), 8) << endl;
	return 0;
}