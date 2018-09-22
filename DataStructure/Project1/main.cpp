#include <iostream>
#include <string.h>
#include "MyStack.h"

using namespace std;

int main()
{
	//test MyStack
	int stackSize = 20;
	MyStack mystack(stackSize);
	MyStruct data[3];
	strcpy_s(data[0].szName, "aaa");
	strcpy_s(data[1].szName, "bbb");
	strcpy_s(data[2].szName, "ccc");

	//push data into stack
	cout << "Push data into stack:"<< endl;
	for (int i = 0; i < 3; i++)
	{
		cout << data[i].szName << endl;
		mystack.push(data[i]);
	}

	//pop data from stack
	cout << "Pop data from stack:" << endl;
	MyStruct tempData;
	for (int i = 0; i < 3; i++)
	{
		mystack.pop(tempData);
		cout << tempData.szName << endl;
	}

	return 0;
}