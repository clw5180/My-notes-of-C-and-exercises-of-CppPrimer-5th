#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<const char*> myList = { "aaa","bbbb","cc", "dddddd" };
	vector<string> myVec;
	myVec.assign(myList.begin(), myList.end());
	for (auto str : myVec)
		cout << str << " ";
	return 0;
}