//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> vec;
//	int i;
//	cout << "请输入两个或以上的整数，以计算相邻整数之和: ";
//	while (cin >> i)
//	{
//		vec.push_back(i);
//	}
//	switch (vec.size())
//	{
//	case 0:
//		cout << "输入有误，请输入至少一个整数！" << endl;
//		break;
//	case 1:
//		cout << "仅输入了一个整数" << vec[0] << "，无法计算相邻整数之和！" << endl;
//		break;
//	default:
//		for (decltype(vec.size())i = 0; i < vec.size() - 1; ++i)
//			cout << vec[i] + vec[i + 1] << endl;
//		break;
//	}
//	return 0;
//}