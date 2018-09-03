#ifndef __SALESDATA_PRACTICE_7_11__
#define __SALESDATA_PRACTICE_7_11__

#include <string>
#include <iostream>

using namespace std;

class CSalesData
{
public:
	CSalesData();
	//CSalesData() = default;
	CSalesData(const string &s) :bookNo(s) { cout << "执行构造函数CSalesData(const string &s)" << endl; };
	CSalesData(const string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) { cout << "执行构造函数CSalesData(const string &s, unsigned n, double p)" << endl; };
	CSalesData(istream &);

	~CSalesData();

	string const& isbn() const { return bookNo; };
	CSalesData& combine(const CSalesData&);

	//add by clw
	string& GetBookNo() { return bookNo; }
	unsigned& GetUnitsSold() { return units_sold; }
	double& GetRevenue() { return revenue; }

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};


// nonmember functions
istream &read(std::istream &is, CSalesData &item);

ostream &print(std::ostream &os, const CSalesData &item);

CSalesData add(const CSalesData &lhs, const CSalesData &rhs);


#endif
