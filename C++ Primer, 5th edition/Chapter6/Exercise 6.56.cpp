#include <iostream>

#include <vector>

using namespace std;

typedef int(*fp)(const int, const int);

int NumAdd(const int n1, const int n2) { return n1 + n2; }
int NumSub(const int n1, const int n2) { return n1 - n2; }
int NumMul(const int n1, const int n2) { return n1 * n2; }
int NumDiv(const int n1, const int n2) { return n1 / n2; }

vector<fp> fVec{ NumAdd, NumSub, NumMul, NumDiv };

int main()
{
	for (auto it = fVec.cbegin(); it != fVec.cend(); ++it)
		cout << (*it)(2, 2) << std::endl;

	return 0;
}