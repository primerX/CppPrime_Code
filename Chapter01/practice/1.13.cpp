#include <iostream> 

// ��ϰ 1.9 
int main()
{
	int sum = 0;
	for(int i = 50; i <= 100; ++i){
		sum += i;
	} 
	std::cout << sum << std::endl;
	return 0;
}

// ��ϰ1.10
int main()
{
	for(int i = 10; i >= 0; --i){
		std::cout << i << " ";
	}
	return 0;
}

// ��ϰ 1.11
int main()
{
	std::cout << "��������������: ";
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if(v1 < v2){		//��С�������	
		for(int i = v1; i <= v2; ++i){
			std::cout << i << " ";
		}
	}else{		//�Ӵ�С���
		for(int i = v1; i >= v2; --i){
			std::cout << i << " ";
		} 
	}
	return 0;
 } 
