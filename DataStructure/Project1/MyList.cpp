#include "MyList.h"
#include <iostream>


MyList::MyList():m_pHead(NULL)
{
	
}


MyList::~MyList()
{
}

//stChain* MyList::CreateList()
//{
//	stChain *head = NULL, *cur = NULL, *last = NULL;
//	head = (stChain *)malloc(sizeof(stChain));
//	int data;
//	scanf_s("%d", &data);
//	if (data == -1) {
//		return NULL;
//	}else{		
//		head->value = data;
//		last = head;
//	}
//	while (1) {
//		scanf_s("%d", &data);
//		if (data == -1) {
//			last->next = NULL;
//			return head;
//		}
//		else {
//			cur = (stChain *)malloc(sizeof(stChain));
//			cur->value = data;
//			last->next = cur;
//			last = cur;
//		}
//	}
//}
//
//void MyList::ShowList(stChain *list) 
//{
//	stChain *cur = list;
//	while (cur != NULL) {
//		printf("%d ", cur->value);
//		cur = cur->next;
//	}
//
//}



int  MyList::CreateList(stChain* &pHead)
{
	if (pHead != NULL)
		return -1;
	else
		pHead = (stChain*)malloc(sizeof(stChain));

	stChain *pLast, *pCurr;
	int data = 0;
	printf("Please input a number:");
	scanf_s("%d", &data);
	if (data == -1)
	{
		printf("No Input!\n");
		return -2;
	}
	
	pHead->value = data;
	pLast = pHead;
	pCurr = pHead;

	while (1)
	{
		printf("Please input a number:");
		scanf_s("%d", &data);
		if (data == -1)
		{
			pCurr->next = NULL;
			printf("End Input.\n");
			return 0;
		}
		pCurr = (stChain*)malloc(sizeof(stChain));
		pCurr->value = data;
		pLast->next = pCurr;
		pLast = pCurr;
	}
}

int MyList::ShowList(stChain* pHead)
{
	if (pHead == NULL)
		return -1;

	stChain* pCurr = pHead;
	while (pCurr != NULL)
	{
		printf("This list contains the number %d\n", pCurr->value);
		pCurr = pCurr->next;
	}
	return 0;
}


int MyList::AddList(int value)
{
	if (m_pHead == NULL)
		return -1;

	stChain *pCurr = m_pHead;
	stChain *pTemp;
	while (pCurr != NULL)
	{
		if (value < pCurr->next->value)
		{
			if (pCurr == m_pHead)
			{
				pTemp = (stChain *)malloc(sizeof(stChain));
				pTemp->value = value;
				pTemp->next = m_pHead;
				m_pHead = pTemp;
				return 0;
			}
			else
			{
				pTemp = pCurr->next;
				pCurr->next = (stChain *)malloc(sizeof(stChain));
				pCurr->next->value = value;
				pCurr->next->next = pTemp;
				return 0;
			}
		}
		else
			pCurr = pCurr->next;
	}
	return -2;
}