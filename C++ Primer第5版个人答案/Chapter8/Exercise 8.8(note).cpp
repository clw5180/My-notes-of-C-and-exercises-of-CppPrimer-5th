#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Exercise 7.11 CSalesData.h"

using namespace std;

int main(int argc, char* argv[])
{
	//clw note：要在Debug目录下命令行打开，输入 .\Chapter8.exe ../sales_record.txt ../sales_out.txt
	ifstream inputFile(argv[1]);
	ofstream outputFile(argv[2], ofstream::app);

	if (!inputFile.is_open())
	{
		cerr << "Error! Can't open input file!";
		return -1;
	}

	CSalesData total;
	if (read(inputFile, total))
	{
		CSalesData trans;
		while (read(inputFile, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				print(outputFile, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
		print(outputFile, total) << endl;
	}
	else
		cerr << "Nodata?!" << endl;

	return 0;
}