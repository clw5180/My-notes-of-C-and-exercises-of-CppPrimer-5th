//#include <iostream>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//int main()
//{
//	list<int>      li{ 1, 2, 3, 4, 5 };
//	vector<int>    vec2{ 1, 2, 3, 4, 5 };
//	vector<int>    vec3{ 1, 2, 3, 4 };
//
//	vector<int> vecTemp(li.begin(), li.end());
//	cout << (vecTemp == vec2 ? "true" : "false") << endl;
//	cout << (vecTemp == vec3 ? "true" : "false") << endl;
//
//	//clw note：另一种写法如下
//	//cout << (vector<int>(li.begin(), li.end()) == vec2 ? "true" : "false") << endl;
//	//cout << (vector<int>(li.begin(), li.end()) == vec3 ? "true" : "false") << endl;
//
//	return 0;
//}