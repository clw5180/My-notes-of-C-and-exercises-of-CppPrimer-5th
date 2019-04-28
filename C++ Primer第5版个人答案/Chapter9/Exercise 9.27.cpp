#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> myList = { 0,1,2,3,4,5,6,7,8,9 };
	auto prev = myList.before_begin();
	auto curr = myList.begin() ;
	while (curr != myList.end())
	{
		if (*curr % 2 != 0)
		{
			curr = myList.erase_after(prev);
		}
		else
		{ 
			prev = curr;
			++curr;
		}
	}
	
	for (auto i : myList)
		cout << i << " ";

	return 0;
}
