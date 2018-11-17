#include<iostream>

int main()
{
	int sum = 0, val = 1;
	// 只要 val 的值 <= 10, while 循环就会持续执行
	while(val <= 10){
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}
