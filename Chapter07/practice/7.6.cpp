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