//#define NDEBUG
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void Print(vector<int> iVect)
//{
//	if (!iVect.empty())
//	{
//#ifndef NDEBUG
//		cout << "The size of vector : " << iVect.size() << endl;
//#endif
//		int iTemp = iVect.back();
//		iVect.pop_back();
//		Print(iVect);
//		cout << iTemp << " ";
//	}
//}
//	
//int main()
//{
//	vector<int> iVec = { 1,3,5,2,4,6,7 };
//	Print(iVec);
//	return 0;
//}