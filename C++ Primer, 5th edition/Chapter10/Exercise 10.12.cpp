#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Exercise 7.11 CSalesData.h"

using namespace std;

bool CompareIsbn(const CSalesData &obj1, const CSalesData &obj2)
{
	return obj1.isbn() < obj2.isbn();

}

int main()
{
	CSalesData salesDataObj1("0-11111");
	CSalesData salesDataObj2("0-33333");
	CSalesData salesDataObj3("0-22222");
	CSalesData salesDataObj4("1-111111");
	CSalesData salesDataObj5("1-33333");
	vector<CSalesData> classVec = { salesDataObj1, salesDataObj2, salesDataObj3, salesDataObj4, salesDataObj5 };
	sort(classVec.begin(), classVec.end(), CompareIsbn);
	for (auto obj : classVec)
		cout << obj.isbn() << " ";
	return 0;
}