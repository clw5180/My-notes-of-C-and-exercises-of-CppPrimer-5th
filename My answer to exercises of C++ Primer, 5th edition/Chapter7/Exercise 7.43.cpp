#include <iostream>

using namespace std;

class NoDefault
{
public:
	NoDefault(const string&);
};


struct C
{
	C() :c_member("") {}
	NoDefault c_member;
};

int main()
{
	C c;
	return 0;
}