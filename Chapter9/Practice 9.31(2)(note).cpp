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
			//clw note������curr�ƶ�2������1����Ϊ�����currλ�û��ǵ�һ��1
			advance(curr, 2);
			advance(prev, 2);
		}
		else
		{
			curr = ivec.erase_after(prev);
			//clw note��0ɾ�����Ժ�prev����1��ǰ���ˣ�������+1
			//advance(prev, 1);
		}
	}
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	return 0;
}