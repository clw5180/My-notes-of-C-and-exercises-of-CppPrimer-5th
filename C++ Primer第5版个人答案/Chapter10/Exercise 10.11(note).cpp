#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	vector<string> strVec = { "aaa", "bbbb", "cc", "aaaa"};
	sort(strVec.begin(), strVec.end(), isShorter); //clw note：注意isShorter的有无带来的影响
	for (auto str : strVec)
		cout << str << " ";
	cout << endl;
	return 0;
}