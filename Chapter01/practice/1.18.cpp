#include<iostream>

int main()
{
	//currVal ������ͳ�Ƶ���; ���������ֵ���� val
	int currVal = 0, val = 0; 
	// ��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
	if(std::cin >> currVal){
		int cnt = 1;		//������¼���ڴ����ֵ�ĸ���
		while(std::cin >> val){		//��������
			if(val == currVal){		//���ֵ��ͬ
				++cnt;			//cntֵ�� 1 
			}else{				//ֵ��ͬ
				// ��ӡǰһ��ֵ�ĸ��� 
				std::cout << currVal << " occurs "
							<< cnt << " times " << std::endl;
				currVal = val;		//��ס�µ�ֵ
				cnt = 1;		//���ü����� 
			}
		}
		// ��ס��ӡ�ļ������һ��ֵ�ĸ���
		std::cout << currVal << " occurs " 
					<< cnt << " times " << std::endl;
	} 
	return 0;
}
