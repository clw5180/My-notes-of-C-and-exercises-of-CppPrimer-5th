//#include <iostream>
//
//using namespace std;
//
//void Print(const int num)
//{
//	cout << num << endl;
//}
//
//void Print(const int (&arr)[2])
//{
//	for (auto i : arr)
//		cout << i << endl;
//}
//
//void Print(const int *begin, const int *end)
//{
//	while (begin != end)
//		cout << *begin++ << endl;
//}
//
//int main()
//{
//	int i = 0, j[2] = { 0,1 };
//	Print(i);
//	Print(j);
//	Print(begin(j), end(j));
//	return 0;
//}