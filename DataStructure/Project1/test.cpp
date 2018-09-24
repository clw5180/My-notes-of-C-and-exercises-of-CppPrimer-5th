#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l;
	for (int i = 0; i < 5; i++)
	{
		l.push_back(i + 1);
	}
	list<int>::iterator current = l.begin();
	current = l.begin();
	current++;
	current++;
	current++;
	l.insert(current, 100);

	for (list<int>::iterator iter = l.begin(); iter != l.end(); iter++)
	{
		cout << *iter << endl;
	}
}