#include<iostream>

int main()
{
	//currVal 是正在统计的数; 将读入的新值存入 val
	int currVal = 0, val = 0; 
	// 读取第一个数，并确保确实有数据可以处理
	if(std::cin >> currVal){
		int cnt = 1;		//用来记录正在处理的值的个数
		while(std::cin >> val){		//读入数据
			if(val == currVal){		//如果值相同
				++cnt;			//cnt值加 1 
			}else{				//值不同
				// 打印前一个值的个数 
				std::cout << currVal << " occurs "
							<< cnt << " times " << std::endl;
				currVal = val;		//记住新的值
				cnt = 1;		//重置计数器 
			}
		}
		// 记住打印文件中最后一个值的个数
		std::cout << currVal << " occurs " 
					<< cnt << " times " << std::endl;
	} 
	return 0;
}
