#include <iostream>

using namespace std;

void mySwap(int &i, int &j)
{
	int tmp = i;
	i = j;
	j = tmp;
}

int main(int argc, char const *argv[])
{
	int a = 10, b = 10;
	cout << "交换前: a = " << a << ", b = " << b << endl;
	mySwap(a, b);
	cout << "交换后: a = " << a << ", b = " << b << endl; 
	return 0;
}