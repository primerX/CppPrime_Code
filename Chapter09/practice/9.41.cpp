#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vc = {'H', 'e', 'l', 'l', 'o'};
	string s(vc.data(), vc.size());
	cout << s << endl;
	return 0;
}