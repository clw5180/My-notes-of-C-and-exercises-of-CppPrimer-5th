//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int arr[3][4] =
//	{
//		{ 0, 1, 2, 3 },
//		{ 4, 5, 6, 7 },
//		{ 8, 9, 10, 11 }
//	};
//	
//	//case 1
//	for (const int (&row)[4] : arr)
//		for (auto col : row)
//			cout << col << " ";
//	cout << endl;
//
//	//case 2
//	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		for (size_t j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
//			cout << arr[i][j] << " ";
//	cout << endl;
//
//	//case 3
//	for (int (*p)[4] = arr; p < arr + sizeof(arr) / sizeof(arr[0]); p++)
//		for (int *q = *p; q < *p + sizeof(arr[0]) / sizeof(arr[0][0]); q++)
//			cout << *q << " ";
//	cout << endl;
//
//	return 0;
//}