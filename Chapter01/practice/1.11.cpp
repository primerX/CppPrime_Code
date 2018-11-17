#include <iostream>

int main()
{
	std::cout << "请输入两个整数:";
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if(v1 > v2){		//从大到小打印
		while(v1 >= v2){
			std::cout << v1 << " ";
			v1--;
		} 
	}else{		//从小到大打印
		while(v1 <= v2){
			std::cout << v1 << " ";
			v1++;
		} 
	}
	return 0;
}
