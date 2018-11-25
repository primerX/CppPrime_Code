#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "请以此输入被除数和除数: " << endl;
	int ival1, ival2;
	cin >> ival1 >> ival2;
	if(ival2 == 0)
	{
		throw runtime_error("除数不能为 0");
	}
	cout << "两数相加的结果是: " << ival1 / ival2 << endl;
	return 0;
}