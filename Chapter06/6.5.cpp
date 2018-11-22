#include <iostream>
#include <cmath>
using namespace std;

// 通过 if-else 语句来计算绝对值
double myAbs1(double val)
{
	if(val < 0){
		return -val;
	}else{
		return val;
	}
}

// 通过调用 cmath 头文件的 abs 函数来计算绝对值
double myAbs2(double val)
{
	return abs(val);
}

int main(int argc, char const *argv[])
{
	double num;
	cout << "请输入 num 的值: "
	cin >> num;
	cout << num << " 的绝对值为 " << myAbs1(num) << endl;
	cout << num << " 的绝对值为 " << myAbs2(num) << endl;
	return 0;
}