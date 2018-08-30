#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cout << "Input a string with punctuation: ";
	while (getline(cin, str))
	{
		for (auto c : str)
			if (!ispunct(c))
				cout << c;
		cout << endl;
	}
	return 0;
}