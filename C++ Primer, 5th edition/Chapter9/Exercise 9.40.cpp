#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> myVec;
	//myVec.reserve(16);
	string word;
	int count = 0;
	while (cin >> word)
	{
		count++;
		myVec.push_back(word);
		cout << "Count of number: " << count << "	";
		cout << "The capacity of vector is " << myVec.capacity() << endl;
	}
	myVec.resize(myVec.size() + myVec.size() / 2);
	cout << "Now the capacity of vector is" << myVec.capacity() << endl;
	return 0;
}