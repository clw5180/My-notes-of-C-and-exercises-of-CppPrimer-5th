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
//		for (decltype(iVec.size())i = 0; i < iVec.size() - 1; ++i)
//			cout << iVec[i] + iVec[i + 1] << endl;
//	}
//	return 0;
//}