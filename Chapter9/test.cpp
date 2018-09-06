//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//
//using namespace std;
//
////clw note：测试各种容器所能容纳的最大元素数的值
////          为何vector<string>是vector<vector<vector<string>>>能容纳最大元素数的1.75倍？
//int main01()
//{
//	list<string> strList;
//
//	vector<string> strVec;
//	vector<vector<string>> strVec2;
//	vector<vector<vector<string>>> strVec3;
//	
//	vector<int> iVec;
//	vector<float> iVec2;
//	vector<short> iVec3;
//
//	cout << strList.max_size() << endl;
//
//	cout << strVec.max_size() << endl;
//	cout << strVec2.max_size() << endl;
//	cout << strVec3.max_size() << endl;
//
//	cout << iVec.max_size() << endl;
//	cout << iVec2.max_size() << endl;
//	cout << iVec3.max_size() << endl;
//
//	return 0;
//}
//
//int main()
//{
//	vector<int> iVec = { 1,2,3,4,5 };
//	auto iter = iVec.begin();
//	iVec.push_back(8);
//	cout << *iter << endl;
//	return 0;
//}