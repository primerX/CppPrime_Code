#include <iostream>

int main()
{
	int sum = 0, val = 0;
	//读取数据，直至文件结束 
	for(;std::cin >> val;){
		sum += val;
	}
	std::cout << "Sum = " << sum << std::endl;
	return 0;
}
