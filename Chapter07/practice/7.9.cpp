// 仿照 Sales_data 类，为 Person 类添加相应的 read 和 print 函数

// read 函数
std::istream &read(std::istream &is, Person &per)
{
	is >> per.strName >> per.strAddress;
	return is;
}

// print 函数
std::ostream &print(std::ostream &os, const Person &per)
{
	os << per.getName() << " " << per.getAddress();
	return os;
}