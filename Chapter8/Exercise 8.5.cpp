#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//clw note����ȷ�����ʽΪ./test.txt
	cout << "Input a file path:" ; 
	string str;
	cin >> str;
	ifstream inputFile(str);
	if (!inputFile.is_open())
	{
		cerr << "Error! Can't open input file!";
		return -1;
	}
	string word;
	vector<string> vecStr;
	while (inputFile >> word)
		vecStr.push_back(word);
	for (auto str : vecStr)
		cout << str << endl;
	return 0;
}