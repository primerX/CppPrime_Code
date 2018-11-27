class Person
{
private:
	string strName;		// 姓名
	string strAddress;	// 地址
public:			// 构造函数
	Person() = default;	// 默认构造函数
	Person(const string &name, const string &add) { strName = name; strAddress = add;}
	explicit Person(std::istream &is) {is >> *this; }
public:
	string getName() const { return strName; }			// 返回姓名
	string getAddress() const { return strAddress; }	// 返回地址
};