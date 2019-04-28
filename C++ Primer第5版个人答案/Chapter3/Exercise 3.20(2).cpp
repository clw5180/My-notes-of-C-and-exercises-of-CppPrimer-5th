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
//	auto size = (iVec.size() + 1) / 2;
//	for (decltype(iVec.size())j = 0; j < size; ++j)
//		cout << iVec[j] + iVec[iVec.size() - j - 1] << endl;
//	return 0;
//}