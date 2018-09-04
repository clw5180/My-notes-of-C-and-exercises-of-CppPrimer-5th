//#include <iostream>
//#include <string>
//
//using namespace std;
//
//istream &Print(istream& is)
//{
//	string str;
//	while (is >> str)
//		cout << str << endl;
//	is.clear();
//	return is;
//}
//
//int main()
//{
//
//	istream& is = Print(cin);
//
//	//clw note：如果屏蔽is.clear()，则输出值为3
//	cout << is.rdstate() << endl;
//
//	//clw note：尝试一下引用返回类型做左值
//	//int i = 0;
//	//Print(cin)>>i;
//	//cout << i << endl;
//	return 0;
//}