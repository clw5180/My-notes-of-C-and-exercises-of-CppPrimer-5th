#include "Practice 7.11 salesdata.h"

CSalesData::CSalesData()
{
	cout << "ִ�й��캯��CSalesData()" << endl;
}

CSalesData::CSalesData(istream &is)
{
	read(is, *this);
	cout << "ִ�й��캯��CSalesData(istream &)" << endl;
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

//clw note��Ӧ��ʹ����Ԫ��������ǳ�Ա�������ʷǹ������ݳ�Ա������������������дһ��Getxxx()������
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