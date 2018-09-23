#pragma once

struct stChain
{
	stChain* next;
	int value;
};

class MyList
{
public:
	MyList();
	~MyList();

	//stChain* CreateList();
	int CreateList(stChain*& pHead);
	int ShowList(stChain* pHead);
	int AddList(int value);

	stChain*& GetListHead() { return m_pHead; }

private:
	stChain* m_pHead;
};

