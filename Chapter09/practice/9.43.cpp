#include <iostream>
#include <vector>
#include <string>
using namespace std;

void replace_string(string &s, const string &oldVal, const string &newVal)
{
	auto len = oldVal.size();		// 要查找字符串大小
	if(!len){		// 要查找的字符串为空
		return;
	}

	auto iter = s.begin();
	while(iter <= s.end() - 1){		 // 末尾少于 oldVal 长度部分无须检查
		auto iter1 = iter;
		auto iter2 = oldVal.begin();
		// s 中 iter 开始的子串必须每个字符都与 oldVal 相同
		while(iter2 != oldVal.end() && *iter1 == *iter2){
			iter1++;
			iter2++;
		}
		if(iter2 == oldVal.end()){		// oldVal 耗尽---字符串相等
			iter = s.erase(iter, iter1);	// 删除 s 中与 oldVal 相等部分
			if(newVal.size()){		// 检查替换子串是否为空
				iter2 = newVal.end();		// 由后往前逐个插入 newVal 中的字符
				do{
					iter2--;
					iter = s.insert(iter, *iter2);
				}while(iter2 > newVal.begin());
			}
			iter += newVal.size();		// 迭代器移动到新插入内容之后
		}else{
			iter++;
		}
	}
}

int main(int argc, char const *argv[])
{
	string s = "tho thru tho!";
	replace_string(s, "thru", "through");
	cout << s << endl;

	replace_string(s, "tho", "though");
	cout << s << endl;
	return 0;
}