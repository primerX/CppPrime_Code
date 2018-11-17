/*
	该程序计算了 -100 到 100 之间整数的和 
	sum 的终值为 0 
*/
#include <iostream>

int main()
{
	int sum = 0;
	for(int i = -100; i <= 100; i++){
		sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}

