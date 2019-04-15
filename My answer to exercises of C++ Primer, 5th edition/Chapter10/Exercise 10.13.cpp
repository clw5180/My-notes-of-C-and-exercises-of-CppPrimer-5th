#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool IsLongerThanFive(const string &str)
{
	//if (str.length() >= 5)
	//	return true;
	//else
	//	return false;

	//clw note：更好的写法：
	return str.length() >= 5;
}

int main()
{
	vector<string> strVec = { "aaa","bbbbb","ccc","ddddddd","aaaaaa" };
	auto iterTrueEnd = partition(strVec.begin(), strVec.end(), IsLongerThanFive);
	for (auto iter = strVec.cbegin(); iter != iterTrueEnd; ++iter)
		cout << *iter << " ";
	return 0;
}