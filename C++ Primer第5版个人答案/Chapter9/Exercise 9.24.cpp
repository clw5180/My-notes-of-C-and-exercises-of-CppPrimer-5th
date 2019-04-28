#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	cout << v.at(0); // terminating with uncaught exception of type std::out_of_range
	cout << v[0];       // Segmentation fault: 11
	cout << v.front();  // Segmentation fault: 11
	cout << *v.begin(); // Segmentation fault: 11
	return 0;
}

