#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> myList = { 1,2,3,4,5,6,7,8 };
	deque<int> myDequeEven;
	deque<int> myDequeOdd;
	for (auto iter = myList.cbegin(); iter != myList.cend(); ++iter)
	{
		if (*iter % 2 == 0)
			myDequeEven.push_back(*iter);
		else
			myDequeOdd.push_back(*iter);
	}

	for (auto iter = myDequeEven.cbegin(); iter != myDequeEven.cend(); ++iter)
	{
		cout << *iter << endl;
	}

	for (auto iter = myDequeOdd.cbegin(); iter != myDequeOdd.cend(); ++iter)
	{
		cout << *iter << endl;
	}

	//clw note：别人的简便做法
	/*list<int> l{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	deque<int> odd, even;
	for (auto i : l)
		(i & 0x1 ? odd : even).push_back(i);

	for (auto i : odd) cout << i << " ";
	cout << endl;
	for (auto i : even)cout << i << " ";
	cout << endl;*/
	return 0;
}