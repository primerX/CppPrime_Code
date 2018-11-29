#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55};
	vector<int> iv;		// int 的 vector
	list<int> il;		// int 的 list

	iv.assign(ia, ia + 11);		// 将数据拷贝到 vector
	il.assign(ia, ia + 11);		// 将数据拷贝到 list

	vector<int>::iterator iiv = iv.begin();
	while(iiv != iv.end()){
		if(!(*iiv & 1)){		// 偶数
			iiv = iv.erase(iiv);	// 删除偶数，返回下一位置迭代器
		}else{
			iiv++;		// 推进到下一位置
		}
	}

	list<int>::iterator iil = il.begin();
	while(iil != il.end()){
		if(*ill & 1){			// 奇数
			ill = il.erase(ill);	// 删除奇数，返回下一位置迭代器
		}else{
			ill++;
		}
	}

	for(auto it = iv.cbegin(); it != iv.cend(); it++){
		cout << *it << " ";
	}
	cout << endl;

	for(auto it = il.cbegin(); it != il.cend(); it++){
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}