#include <iostream>

int main()
{
	int sum = 0, value = 0;
	// 读取数据直至文件末尾，计算所有读入的值得和
	while(std::cin >> value){
		sum += value;
	} 
	std::cout << "Sum is " << sum << std::endl;
	return 0;
}
