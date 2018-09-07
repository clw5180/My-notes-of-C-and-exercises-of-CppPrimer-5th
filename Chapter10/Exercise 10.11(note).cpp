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
	sort(strVec.begin(), strVec.end(), isShorter); //clw note��ע��isShorter�����޴�����Ӱ��
	for (auto str : strVec)
		cout << str << " ";
	cout << endl;
	return 0;
}