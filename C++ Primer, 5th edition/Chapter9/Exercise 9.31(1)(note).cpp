#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
	list<int> ivec = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = ivec.begin();
	while (iter != ivec.end())
	{
		if (*iter % 2)
		{
			iter = ivec.insert(iter, *iter);
			//clw note：list和forward_list的迭代器没有+=2这样的操作，因为不像vector那样是指针的形式；具体可以打断点看一下；用下面的advance方法实现+=2；
			advance(iter, 2);
		}
		else
			iter = ivec.erase(iter);
	}
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	return 0;
}