#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> iVec;
	int i;
	while (cin >> i)
	{
		iVec.push_back(i);
	}
	cout << count(iVec.cbegin(), iVec.cend(), 1) << endl;
	return 0;
}