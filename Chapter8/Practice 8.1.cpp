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
//	//clw note���������is.clear()�������ֵΪ3
//	cout << is.rdstate() << endl;
//
//	//clw note������һ�����÷�����������ֵ
//	//int i = 0;
//	//Print(cin)>>i;
//	//cout << i << endl;
//	return 0;
//}