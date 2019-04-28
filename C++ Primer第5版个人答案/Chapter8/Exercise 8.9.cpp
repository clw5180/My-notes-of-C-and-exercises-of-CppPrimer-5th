#include <iostream>
#include <sstream>
#include <string>

using namespace std;

istream &Print(istream& is)
{
	string str;
	while (is >> str)
		cout << str << endl;
	is.clear();
	return is;
}

int main()
{
	istringstream inStringStream("aaa");
	Print(inStringStream);
	return 0;
}