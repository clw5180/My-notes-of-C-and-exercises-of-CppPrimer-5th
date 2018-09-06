//#include <iostream>
//#include <forward_list>
//#include <string>
//
//using namespace std;
//
////注意函数名命名为FindAndInsert比较好
//void DoList(forward_list<string> &forwardList, const string &str1, const string &str2)
//{
//	auto prev = forwardList.before_begin();
//	auto curr = forwardList.begin();
//
//	//clw note：注意这里distance的用法
//	auto size = distance(forwardList.begin(), forwardList.end());
//	while(curr != forwardList.end())
//	{
//		if (*curr == str1)
//		{
//			forwardList.insert_after(curr, str2);
//		}
//		prev++;
//		curr++;
//	}
//	if(size == distance(forwardList.begin(), forwardList.end()))
//		forwardList.insert_after(prev, str2);
//}
//
//int main()
//{
//	string mystr1 = "aaa";
//	string mystr1_1 = "ddd";
//	string mystr2 = "eee";
//
//	forward_list<string> myList = { "aaa", "bbb", "aaa", "ccc" };
//	DoList(myList, mystr1, mystr2);
//	for (auto str : myList)
//	{
//		cout << str << " ";
//	}
//	cout << endl;
//
//	myList = { "aaa", "bbb", "ccc" };
//	DoList(myList, mystr1_1, mystr2);
//	for (auto str : myList)
//	{
//		cout << str << " ";
//	}
//	cout << endl;
//
//	return 0;
//}