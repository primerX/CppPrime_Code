#include <iostream>
#include <forward_list>
using namespace std;

void test_and_insert(forward_list<string> &sflst, const string &s1, const string &s2)
{
	auto prev = sflst.before_begin();	//前驱元素
	auto curr = sflst.begin();			// 当前元素
	bool inserted = false;

	while(curr != sflst.end()){
		if(*curr == s1){							// 找到给定字符串
			curr = sflst.insert_after(curr, s2);	// 插入新字符串，curr 指向它
			inserted = true;
		}
		prev = curr;		// 前驱迭代器向前推进
		curr++;				// 当前迭代器向前推进
	}

	if(!inserted){
		sflst.inserted_after(prev, s2);		// 未找到给定字符串, 插入尾后
	}
}

int main(int argc, char const *argv[])
{
	forward_list<string> sflst = {"hello", "!", "world", "!"};

	test_and_insert(sflst, "hello", "你好");
	for(auto it = sflst.cbegin(); it != sflst.cend(); it++){
		cout << *it << " ";
	}
	cout << endl;

	
	return 0;
}