#include <iostream>
#include <string>
using namespace std;

// 该类型没有显示定义默认构造函数，编译器也不会为它合成一个
class NoDefault
{
public:
	NoDefault(int i) { val = i };
	int val;
};

class C
{
public:
	NoDefault nd;
	// 必须显示调用 NoDefault 的带参数构造函数初始化 nd
	C(int i) { nd(i) };
};

int main(int argc, char const *argv[])
{
	C c;		// 使用了类型 C 的默认构造函数
	cout << c.nd.val << endl;
	return 0;
}