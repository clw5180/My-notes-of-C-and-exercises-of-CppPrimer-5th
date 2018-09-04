//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include "Practice 7.11 salesdata.h"
//
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	//clw note：要在Debug目录下命令行打开，输入.\Chapter8.exe ../sales_record.txt
//	ifstream inputFile(argv[1]);
//
//	if (!inputFile.is_open())
//	{
//		cerr << "Error! Can't open input file!";
//		return -1;
//	}
//
//	CSalesData total;
//	if (read(inputFile, total))
//	{
//		CSalesData trans;
//		while (read(inputFile, trans))
//		{
//			if (total.isbn() == trans.isbn())
//				total.combine(trans);
//			else
//			{
//				print(cout, total) << endl;
//				total = trans;
//			}
//		}
//		print(cout, total) << endl;
//	}
//	else
//		cerr << "Nodata?!" << endl;
//
//	return 0;
//}