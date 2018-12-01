#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	list<int> li = {0, 1, 2, 0, 3, 4, 5, 0, 6};

	// 利用反向迭代器查找最后一个 0
	auto last_z = find(li.rbegin(), li.rcend(), 0);

	// 将迭代器向链表头方向推进一个位置
	// 转换为普通迭代器时，将回到最后一个 0 的位置
	last_z++;
	int p = 1;
	// 用 base 将 last_z 转换为普通迭代器
	// 从链表头开始遍历，计数最后一个 0 的编号
	for(auto iter = li.begin(); iter != last_z.base(); iter++, p++){
		if(p >= li.size()){
			cout << "容器中没有 0" << endl;
		}else{
			cout << "最后一个 0 在第 " << p << " 个位置" << endl;
		}
	}
	return 0;
}