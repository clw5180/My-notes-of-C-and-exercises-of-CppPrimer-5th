////ע�⣺�����������룬��ctrl+zȻ��س�
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> iVec;
//	int i;
//	cout << "���������������ϵ��������Լ�����������֮��: ";
//	while (cin >> i)
//	{
//		iVec.push_back(i);
//	}
//	
//	if (iVec.size() < 2)
//	{
//		cout << "����������������������������" << endl;
//		return -1;
//	}
//
//	//If the number of elements in the vector is odd, the middle number will be added to itself.
//	auto size = (iVec.size() + 1) / 2;
//	for (decltype(iVec.size())j = 0; j < size; ++j)
//		cout << iVec[j] + iVec[iVec.size() - j - 1] << endl;
//	return 0;
//}