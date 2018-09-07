#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<string> myListStr;
	string myStr;
	while (cin >> myStr)
	{
		myListStr.push_back(myStr);
	}
	for (auto iter = myListStr.cbegin(); iter != myListStr.cend(); ++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}