class Sales_data
{
public:			// 构造函数的 4 中形式
	Sales_data() = default;		//默认构造函数
	Sales_data(const std::string &book): bookNo(book) { }
	Sales_data(const std::string &book, const unsigned num,
				const double sellp, const double salep);
	Sales_data(std::istream &is) { is >> *this; }
public:
	std::string bookNo;			//书籍编号，隐式初始化为空串
	unsigned units_sold = 0;	// 销售量，显示初始化为 0
	double sellingprice = 0.0;	// 原始价格，显示初始化为 0.0
	double saleprice = 0.0;		// 实售价格，显示初始化为 0.0
	double discount = 0.0;		// 折扣, 显示初始化为 0.0
};