#include "Exercise 7.11 CSalesData.h"

int main()
{
	//input bookNo¡¢unitsSold and price;
	CSalesData total(cin); 

	CSalesData trans;
	if (!total.isbn().empty())
	{
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
	}
	return 0;
}