#include <iostream>
#include <vector>
using namespace std;

// 加法
int func1(int a, int b)
{
	return a + b;
}

// 减法
int func2(int a, int b)
{
	return a - b;
}

// 乘法
int func3(int a, int b)
{
	return a * b;
}

// 除法
int func4(int a, int b)
{
	return a / b;
}

// 计算
void Compute(int a, int b, int (*p)(int, int))
{
	cout << p(a, b) << endl;
}

int main(int argc, char const *argv[])
{
	int i = 5, j = 10;
	decltype(func1) *p = func1, *p2 = func2, *p3 = func3, *p4 = func4;
	vector<decltype(func1) *> vF = {p1, p2, p3, p4};
	for(auto p : vF)
	{
		Compute(i, j, p);
	}
	return 0;
}