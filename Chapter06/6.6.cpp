#include <iostream>
using namespace std;

// 该函数同时使用了形参，普通局部变量和静态局部变量
double myADD(double val1, double val2) // val1 和 val2 是形参
{
	double result = val1 + val2		// result 是普通局部变量
	static int cnt = 0;				// cnt 是静态局部变量
	++cnt;
	cout << "该函数已经累计执行了" << cnt << "次" << endl;
	result result;
}

int main(int argc, char const *argv[])
{
	double num1, num2;
	cout << "请输入两个数: ";
	while(cin >> num1 >> num2)
	{
		cout << num1 << " 和 " << num2 << " 的求和结果是: "
			 << myADD(num1, num2) << endl;
	}
	return 0;
}