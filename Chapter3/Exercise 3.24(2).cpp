////注意：如果想结束输入，按ctrl+z然后回车
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> iVec;
//	int i;
//	cout << "请输入两个或以上的整数，以计算相邻整数之和: ";
//	while (cin >> i)
//	{
//		iVec.push_back(i);
//	}
//
//	if (iVec.size() < 2)
//	{
//		cout << "输入有误，请输入至少两个整数！" << endl;
//		return -1;
//	}
//
//	//If the number of elements in the vector is odd, the middle number will be added to itself.
//	//知乎Pezy的思路：
//	//for (auto lft = v.cbegin(), rht = v.cend() - 1; lft <= rht; ++lft, --rht)
//	//cout << *lft + *rht << " ";
//	//cout << endl;
//
//	// my stupid method
//	auto mid = iVec.begin() + (iVec.size() - 1) / 2;
//	for (auto it = iVec.begin(); it <= mid; ++it)
//	{
//		auto diff = iVec.end() - 1 - it;
//		cout << *it + *(iVec.begin() + diff) << endl;
//	}
//	return 0;
//}



