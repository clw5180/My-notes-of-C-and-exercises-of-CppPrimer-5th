#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	deque<string> myDequeStr;
	string myStr;
	while (cin >> myStr)
	{
		myDequeStr.push_back(myStr);
	}
	for (auto iter = myDequeStr.cbegin(); iter != myDequeStr.cend(); ++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}