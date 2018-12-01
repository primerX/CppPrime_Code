#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	auto sum = [] (int a, int b) { return a + b; }
	cout << sum(1, 1) << endl;
	return 0;
}