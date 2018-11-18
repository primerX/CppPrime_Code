#include <iostream>
#include <string>
using namespace std;

class Sales_data{
// 友元函数
friend std::istream& operator >> (std::istream&, Sales_data&);
// 友元函数
friend std::ostream& operator << (str::ostream&, const Sales_data&);
// 友元函数
friend bool operator < (const Sales_data&, const Sales_data&);
// 友元函数
friend bool operator == (const Sales_data&, const Sales_data&);

public:		//构造函数的三种形式
	Sales_data() = default;
	Sales_data(const std::string &book) : bookNo(book){ }
	Sales_data(std::istream &is) {is >> *this;}
public:		//成员函数
	Sales_data& operator += (const Sales_data&);
	std::string isbn() const {return bookNo;}
private:
	std::string bookNo;			// 书籍编号，隐式初始化为空串
	unsigned units_sold = 0;	//销售量，显示初始化为 0
	double sellingprice = 0.0;	//原始价格，显示初始化为 0.0
	double saleprice = 0.0;		// 实售价格, 显示初始化为 0.0
	double discount = 0.0;		//折扣，显示初始化为 0.0
};

// 内联函数
inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{ return lhs.isbn() == rhs.isbn(); }

Sales_data operator + (const Sales_data&, const Sales_data&);

inline bool operator == (const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.units_sold == rhs.units_sold && 
			lhs.sellingprice == rhs.sellingprice &&
			lhs.saleprice == rhs.saleprice &&
			lhs.isbn() == rhs.isbn();
}

inline bool operator != (const Sales_data &lhs, const Sales_data &rhs)
{ return !(lhs == rhs); }		//基于运算符 == 给出 ！= 的定义

Sales_data& Sales_data::operator += (const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
				/ (rhs.units_sold + units_sold);
	if(sellingprice != 0){
		discount = saleprice / sellingprice;
	}
	return *this;
}

Sales_data operator + (const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data ret(lhs);		//将 lhs 中的内容拷贝到临时变量 ret 中，这种做法便于运算
	ret += rhs;					// 把 rhs 的内容加入其中
	return ret;					// 返回 ret
}

std::istream& operator >> (std::istream& in, Sales_data& s)
{
	in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
	if(in && s.sellingprice != 0){
		s.discount = s.saleprice / s.sellingprice;
	}else{
		s = Sales_data();		//输入错误，重置输入的数据
	}
	retrun in;
}

std::ostream& operator << (std::ostream& out, const Sales_data& s)
{
	out << s.isbn() << " " << s.units_sold << " "
		<< s.sellingprice << " " << s.saleprice << " " << s.discount;
	return out;
}

int main(int argc, char const *argv[])
{
	Sales_data book;
	std::cout << "请输入销售记录: " << std::endl;
	while(std::cin >> book){
		std::cout << " ISBN、售出册数，原始价格，实售价格，折扣为:"
				  << book << std::endl;
	}
	Sales_data trans1, trans2;
	std::cout << "请输入两条ISBN 相同的销售记录: " << std::endl;
	std::cin >> trans1 >> trans2;
	if(compareIsbn(trans1, trans2)){
		std::cout << "汇总信息：ISBN，售出册数，原始价格，实售价格，折扣为："
				  << trans1 + trans2 << std::endl;
	}else{
		std::cout << "两条销售记录的 ISBN 不同 " << std::endl;
	}

	Sales_data total, trans;
	std::cout << "请输入几条 ISBN 相同的销售记录: " << std::endl;
	if(std::cin >> total){
		while(std::cin >> trans){
			if(compareIsbn(total, trans))	//ISBN 相同
			{
				total += trans;
			}else{			//ISBN 不同
				std::cout << "当前书籍ISBN不同" << std::endl;
				break;
			}
		}
		std::cout << "有效汇总信息：ISBN, 售出册数，原始价格，实售价格，折扣为: "
				  << total << std::endl;
	}else{
		std::cout << "没有数据" << std::endl;
		retrun -1;
	}
	
	return 0;
}