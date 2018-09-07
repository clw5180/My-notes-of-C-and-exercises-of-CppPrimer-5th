//#include <iostream>
//
//using namespace std;
//
//void ChangePointer(int *&p1, int *&p2)
//{
//	int *pTemp = p1;
//	p1 = p2;
//	p2 = pTemp;
//}
//
//int main()
//{
//	int *p1 = (int*)0x100;
//	int *p2 = (int*)0x200;
//	cout << p1 << " " << p2 << endl;
//	ChangePointer(p1, p2);
//	cout << p1 << " " << p2 << endl;
//	return 0;
//}