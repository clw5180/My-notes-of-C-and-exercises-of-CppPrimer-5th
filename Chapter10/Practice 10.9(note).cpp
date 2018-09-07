//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
////clw note：一个不错的方法elimDups
//void elimDups(vector<string> &words)
//{
//	for (auto str : words)
//		cout << str << " ";
//	cout << endl;
//
//	sort(words.begin(), words.end());
//	for (auto str : words)
//		cout << str << " ";
//	cout << endl;
//
//	auto end_unique = unique(words.begin(), words.end());
//	for (auto str : words)
//		cout << str << " ";
//	cout << endl;
//
//	words.erase(end_unique, words.end());
//	for (auto str : words)
//		cout << str << " ";
//	cout << endl;
//}
//
//int main()
//{
//	vector<string> strVec = { "aaa","bbb","aaa","ccc","ccc","ddd" };
//	elimDups(strVec);
//	return 0;
//}
