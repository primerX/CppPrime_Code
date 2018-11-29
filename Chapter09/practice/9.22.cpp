#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> iv = {1, 1, 2, 1};		// int 的 vector
	int some_val = 1;

	vector<int>::iterator iter = iv.begin();
	int org_size() = iv.size(), new_ele = 0;	// 原大小和新元素个数

	// 每个循环都重新计算 "mid", 保证正确指向 iv 原来的中央元素
	while(iter != (iv.begin() + org_size / 2 + new_ele)){
		if(*iter == some_val){
			iter = iv.insert(iter, 2 * some_val);	// iter 指向新元素
			new_ele++;		// 新元素个数加 1
			iter++, iter++;		// 将 iter 推进到旧元素的下一个位置
		}else{
			iter++;			// 简单推进 iter
		}
	}

	// 遍历 vector 中的所有元素
	for(auto it = iv.cbegin(); it != iv.cend(); it++){
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}