#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
	list<int> ilist = {0, 1, 2, 3, 4, 5, 6, 7};
	auto curr = ilist.begin();		// 首结点

	while(curr != ilist.end()){
		if(*curr & 1){		// 奇数
			curr = ilist.insert(curr, *curr);		// 插入到当前元素之前
			curr++; curr++;
		}else{				// 偶数
			curr = ilist.erase(curr);		// 删除，指向下一元素
		}
	}

	for(curr = ilist.cbegin(); curr != ilist.cend(); curr++){
		cout << *curr << " ";
	}
	cout << endl;
	return 0;
}


// 对于 forward_list, 由于是单向链表，删除元素时，需要将前驱指针调节为
// 指向下一个节点，因此需要维护 "前驱", "后继" 两个迭代器

int main(int argc, char const *argv[])
{
	forward_list<int> iflst = {0, 1, ,2 ,3, 4, 5, 6};
	auto prev = iflst.before_begin();		// 前驱结点
	auto curr = iflst.begin();				// 首结点, 当前结点

	while(curr != iflst.end()){
		if(*curr & 1){		// 奇数
			curr = iflst.insert_after(curr, *curr);		// 插入当前元素之后
			prev = curr;
			curr++;
		}else{			// 偶数
			curr = iflst.erase_after(prev);		// 删除，curr 指向下一个元素
		}
	}

	for(curr = iflst.cbegin(); curr != iflst.cend(); curr++){
		cout << *curr << " ";
	}
	cout << endl;
	return 0;
}