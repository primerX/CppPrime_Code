/*
	�ó�������� -100 �� 100 ֮�������ĺ� 
	sum ����ֵΪ 0 
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

