#include<iostream>

int main()
{
	int i = 5, j = 10;
	int *p = &i;
	std::cout << "p = " << p << ", *p = " << *p << std::endl;
	
	p = &j;		//�ı�ָ����ָ�Ķ��� 
	std::cout << "p = " << p << ", *p = " << *p << std::endl;
	
	*p = 20;	// ����ָ���ֵ
	std::cout << "p = " << p << ", *p = " << *p << std::endl; 
	return 0;
 } 
