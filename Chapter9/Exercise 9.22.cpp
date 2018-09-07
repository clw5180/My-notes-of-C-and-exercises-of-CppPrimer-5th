#include <iostream>
#include <vector>

using namespace std;


void double_and_insert(vector<int>& iv, int some_val)
{
	auto cursor = iv.size() / 2;
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + cursor;
	while (iter != mid)
	{
		if (*iter == some_val)
		{
			iter = iv.insert(iter, 2 * some_val);
			++cursor;
			mid = iv.begin() + cursor;  //保证mid在插入后依然指向中间值
			++iter;
		}
		++iter;
	}
}

int main()
{
	vector<int> myVec = { 1, 1, 1, 1, 5, 1, 2, 3 };
	double_and_insert(myVec, 1);
	for (auto i : myVec)
	{
		cout << i << " ";
	}
	return 0;
}