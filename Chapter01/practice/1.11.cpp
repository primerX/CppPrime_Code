#include <iostream>

int main()
{
	std::cout << "��������������:";
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if(v1 > v2){		//�Ӵ�С��ӡ
		while(v1 >= v2){
			std::cout << v1 << " ";
			v1--;
		} 
	}else{		//��С�����ӡ
		while(v1 <= v2){
			std::cout << v1 << " ";
			v1++;
		} 
	}
	return 0;
}
