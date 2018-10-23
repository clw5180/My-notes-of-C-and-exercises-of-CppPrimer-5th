#include <iostream>
#include <string>
using namespace std;

void ReplaceString(string &s, const string& oldVal, const string& newVal)
{
	if (s.empty() || oldVal.empty() || newVal.empty())
	{
		return;
	}

	int nOldValLen = oldVal.size();
	for (int i = 0; i<=s.size()- nOldValLen; ++i)
	{
		string strTmp(&s[i], nOldValLen);
		//cout << strTmp << endl;
		if (strTmp == oldVal)
		{
			s.erase(i, nOldValLen);
			s.insert(i, newVal);
		}
	}
}

void ReplaceString2(string &s, const string& oldVal, const string& newVal)
{
	if (s.empty() || oldVal.empty() || newVal.empty())
	{
		return;
	}

	int nOldValLen = oldVal.size();
	for (int i = 0; i <= s.size() - nOldValLen; ++i)
	{
		string strTmp(&s[i], nOldValLen);
		//cout << strTmp << endl;
		if (strTmp == oldVal)
		{
			s.replace(i, nOldValLen, newVal);
		}
	}
}

int main()
{
	string oldVal = "cd";
	string newVal = "zz";

	string myStr = "abcdefg cdec dfcd ";
	ReplaceString(myStr, oldVal, newVal);
	cout << myStr << endl;

	string myStr2 = "abcdefg cdec dfcd ";
	ReplaceString2(myStr2, oldVal, newVal);
	cout << myStr2 << endl;

	return 0;
}