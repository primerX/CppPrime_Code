#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> vs = {"123", "+456", "-79"};
	int sum = 0;
	for(auto iter = vs.begin(); iter != vs.end(); iter++){
		sum += stoi(*iter);
	}
	cout << "和为: " << sum << endl;
	return 0;
}