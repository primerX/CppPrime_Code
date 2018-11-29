#include <iostream>
#include <vector>
#include <string>

void name_string(string &name, const string &prefix, const string &suffix)
{
	name.insert(0, " ");
	name.insert(0, prefix);
	name.insert(name.size(), " ");
	name.insert(name.size(), suffix);
}

int main(int argc, char const *argv[])
{
	string s = "Xiao shi bo";
	name_string(s, "Mr", "II");
	return 0;
}