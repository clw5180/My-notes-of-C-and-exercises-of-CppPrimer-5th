#include <iostream>
#include <string>
using namespace std;

string AddPreAndPostfix(const string& name, const string& pre, const string& post)
{
	string strTmp(name);
	strTmp.insert(0, pre);
	strTmp.append(post);
	return strTmp;
}

int main()
{
	cout << AddPreAndPostfix("bbb", "aaa", "ccc");
	return 0;
}