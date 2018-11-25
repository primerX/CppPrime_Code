#include <iostream>
#include <vector>

using namespace std;

// 求相邻元素和的程序如下所示
int main(int argc, char const *argv[])
{
	vector<int> vInt;		// 元素类型为 int 的 vector 对象
	int iVal;
	cout << "请输入一组数字: " << endl;
	while(cin >> iVal){
		vInt.push_back(iVal);
	}
	if(vInt.size() == 0)
	{
		cout << "没有任何元素" << endl
		return -1;
	}
	cout << "相邻两项的和依次是: " << endl;
	// 利用 decltype 推断 i 的类型
	for(decltype(vInt.size()) i = 0; i < vInt.size() - 1; i += 2)
	{
		// 求相邻两项的和
		cout << vInt[i] + vInt[i+1] << " ";
		// 每行输出 5 个数字
		if((i + 2) % 10 == 0){
			cout << endl;
		}
	}
	// 如果元素个数是奇数，单独处理最后一个元素
	if(vInt.size() % 2 == 1){
		cout << vInt[vInt.size() - 1];
	}
	return 0;
}

// 求首尾元素和的程序如下所示
int main(int argc, char const *argv[])
{
	vector<int> vInt;		// 元素类型为 int 的 vector 对象
	int iVal;
	cout << "请输入一组数字: " << endl;
	while(cin >> iVal){
		vInt.push_back(iVal);
	}
	if(vInt.size() == 0)
	{
		cout << "没有任何元素" << endl;
		return -1;
	}
	cout << "首尾两项的和依次是: " << endl;
	// 利用 decltype 推断 i 的类型
	for(decltype(vInt.size()) i = 0; i < vInt.size() / 2; i++)
	{
		// 求首尾两项的和
		cout << vInt[i] + vInt[vInt.size() - 1 - i] << " ";
		// 每行输出 5 个数字
		if((i + 1) % 5 == 0){
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