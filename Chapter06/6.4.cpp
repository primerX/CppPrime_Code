#include <iostream>
using namespace std;

int fact(int val)
{
	if(val < 0){
		return -1;
	}
	int ret = 1;
	for (int i = 0; i <= val; ++i)
	{
		ret *= i;
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int num;
	cout << "请输入一个数: ";
	cin >> num;
	cout << num << "的阶乘是: " << fact(num) << endl;
	return 0;
}