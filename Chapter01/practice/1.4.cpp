#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout << "请输入两个数" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << v1 << " 和 " << v2 << " 的积为 " << v1 * v2 << std::endl;
	return 0;
}