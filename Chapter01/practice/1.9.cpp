#include<iostream>

int main()
{
	int i = 50, sum = 0;
	while(i <= 100){
		sum += i;
		i++;
	}
	std::cout << "50 �� 100 ֮�������֮��Ϊ ";
	std::cout << sum << std::endl;
	return 0;
}
