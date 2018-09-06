#include <iostream>
#include <forward_list>
#include <vector>

using namespace std;

int main()
{
	forward_list<int> ivec = { 0,1,2,3,4,5,6,7,8,9 };
	auto prev = ivec.before_begin();
	auto curr = ivec.begin();
	while (curr != ivec.end())
	{
		if (*curr % 2)
		{
			curr = ivec.insert_after(prev, *curr);
			//clw note：这里curr移动2而不是1，因为插入后curr位置还是第一个1
			advance(curr, 2);
			advance(prev, 2);
		}
		else
		{
			curr = ivec.erase_after(prev);
			//clw note：0删掉了以后，prev就在1的前面了，不用再+1
			//advance(prev, 1);
		}
	}
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	return 0;
}