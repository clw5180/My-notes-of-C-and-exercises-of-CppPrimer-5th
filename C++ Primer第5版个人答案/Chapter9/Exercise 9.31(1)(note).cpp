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
			//clw note��list��forward_list�ĵ�����û��+=2�����Ĳ�������Ϊ����vector������ָ�����ʽ��������Դ�ϵ㿴һ�£��������advance����ʵ��+=2��
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