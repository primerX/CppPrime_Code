#include <iostream>
#include <algorithm>
using namespace std;

void mutable_lambda(void)
{
	int i = 5;
	auto f = [] () mutable->bool {if (i > 0){i--; return false;} else return true; };

	for(int j = 0; j < 6; j++){
		cout << f() << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	mutable_lambda();
	return 0;
}