//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//auto find(vector<int>::const_iterator first, vector<int>::const_iterator last, int value)
//{
//	while (first != last)
//	{
//		if (*first == value)
//			return first;
//		first++;
//	}
//	return last;
//}
//
//int main()
//{
//	vector<int> myVec = { 1,2,3,4,5 };
//	int value = 5;
//	auto iter = find(myVec.begin(), myVec.end(), value);
//	if (iter != myVec.end())
//		cout << "Contains the value : " << *iter << endl;
//	else
//		cout << "Not contains the value!" << endl;
//	return 0;
//}