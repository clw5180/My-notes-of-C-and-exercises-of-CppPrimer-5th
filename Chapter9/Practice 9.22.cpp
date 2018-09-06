#include <iostream>
#include <vector>

using namespace std;


void double_and_insert(vector<int>& iv, int some_val)
{
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
	while (iter != mid)
		if (*iter == some_val)
		{
			iter = iv.insert(iter, 2 * some_val);
			iter += 2;
			//mid = iv.begin()  + iv.size() / 2;
		}			
}
int main()
{
	vector<int> myVec = { 1, 2, 3, 4, 5, 1, 2, 3 };
	double_and_insert(myVec, 1);
	for (auto i : myVec)
	{
		cout << i << " ";
	}
	return 0;
}

//void double_and_insert(std::vector<int>& v, int some_val)
//{
//	auto mid = [&] { return v.begin() + v.size() / 2; };
//	for (auto curr = v.begin(); curr != mid(); ++curr)
//		if (*curr == some_val)
//			++(curr = v.insert(curr, 2 * some_val));
//}
//
//int main()
//{
//	std::vector<int> v{ 1, 9, 1, 9, 9, 9, 1, 1 };
//	double_and_insert(v, 1);
//
//	for (auto i : v)
//		std::cout << i << std::endl;
//}