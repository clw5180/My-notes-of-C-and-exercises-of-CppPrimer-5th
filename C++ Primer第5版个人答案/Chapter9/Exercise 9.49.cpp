#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream in("./res/word.txt");
	if (in == NULL)
		return -1;

	string strMiddleGrid = "aceimnorsuvwxz";
	string inputWord;
	string theLongestWord;
	while (in >> inputWord)
	{
		if (inputWord.find_first_not_of(strMiddleGrid) == string::npos)
		{
			if (inputWord.length() > theLongestWord.length())
				theLongestWord = inputWord;
		}
	}
	cout << theLongestWord << endl;
	return 0;
}