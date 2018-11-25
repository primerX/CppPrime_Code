#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vInt;	// 元素类型为 int 的 vector 对象
	int i;				// 记录用户的输入值
	char cont = 'y';
	while(cin >> i)
	{
		vInt.push_back(i);
		cout << "您想要继续吗(y or n) ? " << endl;
		cin >> cont;
		if(cont != 'y' && cont != 'Y'){
			break;
		}else{
			for(auto mem : vInt){
				cout << mem << " ";
			}
		}
	}
	cout << endl;
	return 0;
}