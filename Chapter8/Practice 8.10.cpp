//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	//clw note：正确输入格式为. / test.txt
//		cout << "Input a file path:";
//	string str;
//	cin >> str;
//	ifstream inputFile(str);
//	if (!inputFile.is_open())
//	{
//		cerr << "Error! Can't open input file!";
//		return -1;
//	}
//	string word;
//	vector<string> vecStr;
//	while (getline(inputFile, word))
//		vecStr.push_back(word);
//	
//	for (auto &s : vecStr)
//	{
//		istringstream iss(s);
//		string word;
//		while (iss >> word)
//			cout << word << endl;
//	}
//
//	return 0;
//}