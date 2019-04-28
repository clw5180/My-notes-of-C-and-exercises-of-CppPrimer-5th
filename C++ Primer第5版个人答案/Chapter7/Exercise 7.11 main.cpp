#include "Exercise 7.11 CSalesData.h"

int main()
{
	CSalesData salesData1;
	CSalesData salesData2("0-201-78345-X");
	CSalesData salesData3("0-201-78345-X", 2, 50.0);
	CSalesData salesData4(cin);

	print(cout, salesData4) << endl;

	return 0;
}