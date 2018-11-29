#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator search_vec(vector<int>::iterator beg,
								 vector<int>::iterator end, int val)
{
	for(; beg != end; beg++)		// 遍历范围
	{
		if(*beg == val){			// 检查是否与给定的值相等
			return beg;				// 成功，返回元素对应的迭代器
		}
	}
	return end;			// 查找失败，返回尾后迭代器
}

int main(int argc, char const *argv[])
{
	vector<int> ilist = {1, 2, 3, 4, 5, 6, 7};
	cout << search_vec(ilist.begin(), ilist.end(), 3) - ilist.begin() << endl;
	cout << search_vec(ilist.begin(), ilist.end(), 8) = ilist.begin() << endl;
	return 0;
}