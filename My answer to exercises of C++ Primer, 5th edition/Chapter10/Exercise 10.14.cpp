#include <iostream>

using namespace std;

auto add = [](const int &num1, const int &num2) { return num1 + num2; };

int main()
{
	int a = 1;
	int b = 2;
	cout << add(a, b) << endl;
	return 0;
}