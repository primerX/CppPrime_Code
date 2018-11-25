#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	cout << "利用范围 for 语句输出多维数组的内容: " << endl;
	for(int (&row)[4] : ia)
	{
		for(int &col : row)
		{
			cout << col << " ";
		}
		cout << endl;
	}

	cout << "利用普通 for 循环和下标运算符输出多维数组的内容: " << endl;
	for(int i = 0; i != 3; i++)
	{
		for(int j = 0; j != 4; j++)
		{
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}

	cout << "利用普通 for 循环和指针输出多维数组的内容: " << endl;
	for(int (*p)[4] = ia; p != ia + 3; p++)
	{
		for(int *q = *p; q != *p + 4; q++)
		{
			cout << *q << " ";
		}
		cout << endl;
	}
	return 0;
}