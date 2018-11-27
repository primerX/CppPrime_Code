class Book
{
private:
	// 书名，编号，作者,出版社
	string Name, ISBN, Author, Publisher;
	double price;	// 定价
public:
	Book() = default;	//默认构造函数
	Book(const string &n, const string &I, double pr, 
		 const string &a, const string &p)
	{
		Name = n;
		ISBN = I;
		price = pr;
		Author = a;
		Publisher = p;
	}
	Book(std::istream &is) { is >> *this; }
};