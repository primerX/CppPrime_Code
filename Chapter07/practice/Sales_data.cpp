class Sale_data
{
	// 三个友元函数
friend Sale_data add(const Sale_data &lhs, const Sale_data &rhs);
friend std::istream &read(std::istream &is, Sale_data &item);
friend std::ostream &print(std::ostream &os, const Sale_data &item);
public:		// 构造函数的 4 种形式
	Sale_data() = default;		// 默认构造函数
	Sale_data(const std::string &book): bookNo(book) { }
	Sale_data(const std::string &book, const unsigned num,
			  const double sellp, const double salep);
	Sale_data(std::istream &is);
private:
	std::string bookNo;			//书籍编号，隐式初始化为空串
	unsigned units_sold = 0;	// 销售量，显示初始化为 0
	double sellingprice = 0.0;	// 原始价格，显示初始化为 0.0
	double saleprice = 0.0;		// 实售价格，显示初始化为 0.0
	double discount = 0.0;		// 折扣, 显示初始化为 0.0
};

Salse_data::Sale_data(const std::string &book, const unsigned num,
					  const double sellp, const double salep)
{
	bookNo = book;
	units_sold = num;
	sellingprice = sellp;
	saleprice = salep;
	if(sellingprice != 0){
		discount = saleprice / sellingprice;	// 计算折扣
	}
}

Sale_data::Sale_data(std::istream &is)
{
	is >> *this;
}

// add 函数
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

// read 函数
std::istream &read(std::istream &is, Sales_data &item)
{
	is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
	return is;
}

// print 函数
std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.sellingprice
		<< " " << item.saleprice << " " << item << item.discount;
	return os;
}