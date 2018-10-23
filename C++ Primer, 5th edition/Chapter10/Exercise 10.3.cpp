#include <numeric>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> iVec = { 1,2,3,4,5 };
	cout << accumulate(iVec.cbegin(), iVec.cend(), 0) << endl;
	return 0;
}