#include "Practice 7.11 salesdata.h"

CSalesData::CSalesData()
{
	cout << "执行构造函数CSalesData()" << endl;
}

CSalesData::CSalesData(istream &is)
{
	read(is, *this);
	cout << "执行构造函数CSalesData(istream &)" << endl;
}


CSalesData::~CSalesData()
{
}

// member functions.
CSalesData& CSalesData::combine(const CSalesData& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// nonmember functions
std::istream &read(std::istream &is, CSalesData &item)
{
	double price = 0;
	is >> item.GetBookNo() >> item.GetUnitsSold() >> price;
	item.GetRevenue() = price * item.GetUnitsSold();
	return is;
}

//clw note：应该使用友元，来允许非成员函数访问非公有数据成员，而不是像下面这样写一堆Getxxx()。。。
std::ostream &print(std::ostream &os, const CSalesData &item)
{
	os << item.isbn() << " " << const_cast<CSalesData&>(item).GetUnitsSold() << " " << const_cast<CSalesData&>(item).GetRevenue();
	return os;
}

CSalesData add(const CSalesData &lhs, const CSalesData &rhs)
{
	CSalesData sum = lhs;
	sum.combine(rhs);
	return sum;
}