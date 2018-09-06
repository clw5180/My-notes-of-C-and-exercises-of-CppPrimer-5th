//#include <iostream>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//int main()
//{
//	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
//	vector<int> iVec(ia, end(ia));
//	list<int> iList(ia, end(ia));
//
//	auto iter = iVec.begin();
//	while (iter != iVec.end())
//	{
//		if (*iter % 2 == 0)
//			iter = iVec.erase(iter);
//		else
//			++iter;
//	}
//
//	auto it = iList.begin();
//	while (it != iList.end())
//	{
//		if (*it % 2 != 0)
//			it = iList.erase(it);
//		else
//			++it;
//	}
//
//	for (auto i : iVec)
//		cout << i << " ";
//	cout << endl;
//
//	for (auto i : iList)
//		cout << i << " ";
//	cout << endl;
//
//	return 0;
//}