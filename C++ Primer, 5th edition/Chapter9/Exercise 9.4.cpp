#include <iostream>
#include <vector>

using namespace std;

bool contains(vector<int>::const_iterator first, vector<int>::const_iterator last, int value)
{
	while (first != last)
	{
		if (*first++ == value)
			return true;
	}
	return false;
}

int main()
{
	vector<int> myVec = { 1,2,3,4,5 };
	int value = 5;
	if (contains(myVec.begin(), myVec.end(), value))
		cout << "Contains the value!" << endl;
	else
		cout << "Not contains the value!" << endl;
	return 0;
}