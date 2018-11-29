#include <iostream>
#include <vector>
#include <list>
using namespace std;

// 比较 list<int> 中的元素与 vector<int> 中的元素
bool l_v_equal(vector<int> &ivec, list<int> &ilist)
{
	// 比较 list 与 vector 的元素个数
	if(ilist.size() != ivec.size()){
		return false;
	}
	auto lb = ilist.begin();	// list 首元素
	auto le = ilist.end();		// list 尾后元素
	auto vb = ivec.cbegin();	// vector 首元素
	for(; lb != le; le++, vb++){
		if(*lb != *vb){
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	vector<int> ivec = {1, 2, 3, 4, 5, 6, 7};
	list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
	list<int> ilist1 = {1, 2, 3, 4, 5};
	cout << l_v_equal(ivec, ilist) << endl;
	cout << l_v_equal(ivec, ilist1) << endl;
	return 0;
}