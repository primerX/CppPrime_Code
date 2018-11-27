class Sales_data
{
public:
	// 隐式内联, 在类的内部定义
	double avg_price() const
	{
		if(units_sold) return revenue/units_sold;
		else return 0;
	}
};


// 显示内联, 将 avg_price 函数的定义放在类的的外部,并指定 inline
inline double Sales_data::avg_price() const
{
	if(units_sold) return revenue/units_sold;
	else return 0;
}