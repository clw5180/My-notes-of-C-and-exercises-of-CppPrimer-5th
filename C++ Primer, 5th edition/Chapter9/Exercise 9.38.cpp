#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> iVec;
	int number;
	int count = 0;
	while (cin >> number)
	{
		count++;
		iVec.push_back(number);
		cout << "Count of number: "<< count << "	";
		cout << "The capacity of vector is "<< iVec.capacity() << endl;
		
	}
	return 0;
}