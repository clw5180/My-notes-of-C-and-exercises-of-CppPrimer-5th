#ifndef __SALESDATA_PRACTICE_7_26__
#define __SALESDATA_PRACTICE_7_26__

#include <string>
#include <iostream>

using namespace std;

class Sales_data 
{
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
	Sales_data() = default;
	Sales_data(const string &s) :bookNo(s) { }
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(n*p) { }
	Sales_data(istream &is) { read(is, *this); }

	string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);

private:
	double avg_price() const;

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue / units_sold : 0;
}

// declarations for nonmember parts of the Sales_data interface.
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

#endif