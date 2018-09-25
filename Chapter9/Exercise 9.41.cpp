#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<char> myVec = {'h','e','l','l','o'};
	string str(&myVec[0], myVec.size());
	//string str(myVec.begin(), myVec.end());
	cout << str << endl;
	return 0;
}