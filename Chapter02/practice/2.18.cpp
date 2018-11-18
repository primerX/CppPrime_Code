#include<iostream>

int main()
{
	int i = 5, j = 10;
	int *p = &i;
	std::cout << "p = " << p << ", *p = " << *p << std::endl;
	
	p = &j;		//改变指针所指的对象 
	std::cout << "p = " << p << ", *p = " << *p << std::endl;
	
	*p = 20;	// 更改指针的值
	std::cout << "p = " << p << ", *p = " << *p << std::endl; 
	return 0;
 } 
