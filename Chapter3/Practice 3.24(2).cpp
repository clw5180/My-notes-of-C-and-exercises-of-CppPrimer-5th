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
//	//֪��Pezy��˼·��
//	//for (auto lft = v.cbegin(), rht = v.cend() - 1; lft <= rht; ++lft, --rht)
//	//cout << *lft + *rht << " ";
//	//cout << endl;
//
//	// my stupid method
//	auto mid = iVec.begin() + (iVec.size() - 1) / 2;
//	for (auto it = iVec.begin(); it <= mid; ++it)
//	{
//		auto diff = iVec.end() - 1 - it;
//		cout << *it + *(iVec.begin() + diff) << endl;
//	}
//	return 0;
//}



