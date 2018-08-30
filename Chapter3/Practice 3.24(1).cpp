//#include <iostream>
//#include <string>
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
//	else
//	{
//		for (auto it = iVec.begin(); it != iVec.end() - 1; ++it)
//			cout << *it + *(it + 1) << endl;
//	}
//	return 0;
//}