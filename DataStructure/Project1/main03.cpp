#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int> iVec, int key)
{
	if (iVec.empty()) return -1;
	int hi = iVec.size()-1, lo = 0, mid;
	while (lo <= hi)
	{
		mid = (lo + hi) / 2;
		if (key < iVec[mid])
			hi = mid - 1;
		else if (key > iVec[mid])
			lo = mid + 1;
		else
			return mid;
	}
	return -2;
}

void main02()
{
	vector<int> myVec = { 1,2,4,6,8,9,10,200 }; //首先必须保证有序
	int index = BinarySearch(myVec, 2);
	if (index >= 0)
		cout << "Find number, The index = " << index << endl;
	else
		cout << "Can't find number!" << endl;
	
}