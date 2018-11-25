#include <iostream>
#include <vector>

using namespace std;

// 求相邻元素和的程序如下所示
int main(int argc, char const *argv[])
{
	vector<int> vInt;
	int iVal;
	cout << "请输入一组数字: " << endl;
	while(cin >> iVal)
	{
		vInt.push_back(iVal);
	}
	if(vInt.cbegin() == vInt.cend())
	{
		cout << "没有任何元素" << endl;
		return -1;
	}
	cout << "相邻两项的和依次是: " << endl;
	// 利用 auto 推断 it 的类型
	for(auto it = vInt.cbegin(); it != vInt.cend() - 1; it++)
	{
		// 求相邻两项的和
		cout << (*it + *(++it)) << " ";
		// 没行输出 5 个数字
		if((it - vInt.cbegin() + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	// 如果元素个数是奇数，单独处理最后一个元素
	if(vInt.size() % 2 == 1)
	{
		cout << vInt[vInt.size() - 1];
	}
	return 0;
}


// 求首尾元素和的程序如下所示
int main(int argc, char const *argv[])
{
	vector<int> vInt;
	int iVal;
	cout << "请输入一组数字: " << endl;
	while(cin >> iVal)
	{
		vInt.push_back(iVal);
	}
	if(vInt.cbegin() == vInt.cend())
	{
		cout << "没有任何元素: " << endl;
		return -1;
	}
	cout << "首尾两项的和依次是: " << endl;
	auto beg = vInt.begin();
	auto end = vInt.end();
	// 迭代器中的加法不存在, 因此 (beg + end) / 2 是不合法的
	// 只能使用 beg + (end - beg) / 2 来定位到容器中间的元素
	for(auto it = beg; it != beg + (end - beg) / 2; it++)
	{
		// 求首尾两项的和
		cout << (*it + *(beg + (end - it) - 1)) << " ";
		// 每行输出 5 个数字
		if((it - beg + 1) % 5 == 0)
		{
			cout << endl;
		}
	}
	// 如果元素个数是奇数，单独处理最后一个元素
	if(vInt.size() % 2 == 1)
	{
		cout << vInt[vInt.size() - 1];
	}
	return 0;
}