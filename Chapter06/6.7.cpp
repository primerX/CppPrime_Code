#include <iostream>
using namespace std;

// 该函数仅用于统计执行的次数
int myCnt()		//不需要任何参数
{
	static int cnt = -1;	// cnt 是静态局部变量
	++cnt;
	return cnt;
}

int main(int argc, char const *argv[])
{
	cout << "请输入任意字符后按回车键结束" << endl;
	char ch;
	while(cin >> ch)
	{
		cout << "函数myCnt()的执行次数是 " << myCnt() << endl;
	}
	return 0;
}