#include <stdio.h>
#include "seqlist.h"

typedef struct Teacher
{
	char name[64];
	int age;
}Teacher;

int main()
{
	SeqList *list = NULL;

	Teacher t1, t2, t3;
	t1.age = 31;
	t2.age = 32;
	t3.age = 33;

	list = SeqList_Create(10);

	SeqList_Insert(list, (SeqListNode*)&t1, 0);
	SeqList_Insert(list, (SeqListNode*)&t2, 0);
	SeqList_Insert(list, (SeqListNode*)&t3, 0);

	//循环遍历
	for (int i = 0; i < SeqList_Length(list); i++)
	{
		Teacher *tmp = (Teacher*)SeqList_Get(list, i);
		if (tmp != NULL)
		{
			printf("tmp->age = %d\n", tmp->age);
		}
	}

	//循环删除
	for (int i = 0; i < SeqList_Length(list); i++)
	{
		SeqList_Delete(list, 0);
	}
	SeqList_Destroy(list);

	return 0;

/*
	//创建并且返回一个空的线性表
	SeqList* SeqList_Create(int capacity);

	//销毁一个线性表list
	void SeqList_Destroy(SeqList* list);

	//将一个线性表list中的所有元素清空, 线性表回到创建时的初始状态
	void SeqList_Clear(SeqList* list);

	//返回一个线性表list中的所有元素个数
	int SeqList_Length(SeqList* list);

	int SeqList_Capacity(SeqList* list);

	//向一个线性表list的pos位置处插入新元素node
	int SeqList_Insert(SeqList* list, SeqListNode* node, int pos);

	//获取一个线性表list的pos位置处的元素
	SeqListNode* SeqList_Get(SeqList* list, int pos);

	//删除一个线性表list的pos位置处的元素  返回值为被删除的元素，NULL表示删除失败
	SeqListNode* SeqList_Delete(SeqList* list, int pos);
*/
   
}