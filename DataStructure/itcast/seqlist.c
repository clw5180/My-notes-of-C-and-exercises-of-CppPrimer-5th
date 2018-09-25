
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "seqlist.h"

typedef struct _tag_SeqList
{
	int capacity;
	int length;
	unsigned int *node; //unsigned int array[capacity]
}TSeqList;


SeqList* SeqList_Create_01(int capacity)
{
	TSeqList *ret = NULL;
	if (capacity < 0)
	{
		return NULL;
	}
	ret = (TSeqList *)malloc(sizeof(TSeqList));
	if (ret == NULL)
	{
		return NULL;
	}
	memset(ret, 0, sizeof(sizeof(TSeqList)));
	ret->node = (unsigned int *)malloc(sizeof(unsigned int)*capacity);
	if (ret->node == NULL)
	{
		return NULL;
	}
	memset(ret->node, 0, sizeof(unsigned int)*capacity);
	ret->capacity = capacity;
	ret->length = 0;
	return ret;
}

SeqList* SeqList_Create(int capacity)
{
	TSeqList *ret = NULL;
	if (capacity < 0)
	{
		return NULL;
	}
	ret = (TSeqList *)malloc(sizeof(TSeqList) + sizeof(unsigned int)*capacity);
	if (ret == NULL)
	{
		return NULL;
	}
	memset(ret, 0, sizeof(sizeof(TSeqList)) + sizeof(unsigned int)*capacity);
	ret->node = (unsigned int *)(ret + 1); //ret向后跳sizeof（TSeqList）
	ret->capacity = capacity;
	ret->length = 0;
	return ret;
}

void SeqList_Destroy(SeqList* list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
	return;
}

//链表清零 。。。长度为零
void SeqList_Clear(SeqList* list)
{
	TSeqList *tList = NULL;

	if (list == NULL)
	{
		return;
	}
	tList = (TSeqList *)list;
	tList->length = 0;
	return;
}

int SeqList_Length(SeqList* list)
{
	TSeqList *tList = NULL;
	tList = (TSeqList *)list;
	if (list == NULL)
	{
		return -1;
	}

	return tList->length;
}

//线性表的容量和线性表长度是不一样的
int SeqList_Capacity(SeqList* list)
{
	TSeqList *tList = NULL;
	tList = (TSeqList *)list;
	if (list == NULL)
	{
		return -1;
	}

	return tList->capacity;
}

int SeqList_Insert(SeqList* list, SeqListNode* node, int pos)
{
	int i = 0;
	TSeqList *tList = NULL;
	tList = (TSeqList *)list;

	if (list == NULL || node == NULL)
	{
		return -1;
	}

	//查看是不是满了
	if (tList->length >= tList->capacity)
	{
		return -2;
	}

	//位置错误判断
	if (pos < 0 || pos >= tList->capacity)
	{
		return -3;
	}

	//优化的容错。。。
	if (pos >= tList->length)
	{
		pos = tList->length;
	}

	//插入算法
	//从pos位置处开始，把数组后面的元素依此后移
	for (i = tList->length; i > pos; i--)
	{
		//把前的元素往后移
		tList->node[i] = tList->node[i - 1];
	}
	//循环跳出以后，pos正好是，要出入的位置
	tList->node[pos] = (unsigned int)node;
	tList->length++;
	return 0;
}

SeqListNode* SeqList_Get(SeqList* list, int pos)
{

	SeqListNode *ret = NULL;
	TSeqList *tList = NULL;
	tList = (TSeqList *)list;
	if (list == NULL || pos < 0 || pos >= tList->length)
	{
		return NULL;
	}
	ret = (SeqListNode*)tList->node[pos];
	return ret;
}

SeqListNode* SeqList_Delete(SeqList* list, int pos)
{
	int					i;
	TSeqList				*tList = NULL;
	SeqListNode			*ret = NULL;
	tList = (TSeqList *)list;

	if (list == NULL || pos < 0 || pos >= tList->length)
	{
		return NULL;
	}

	//赋给a3之前，要把a3元素缓存下来
	ret = (SeqListNode *)tList->node[pos];
	//删除算法
	for (i = pos + 1; i < tList->length; i++)
	{
		tList->node[i - 1] = tList->node[i];
	}
	tList->length--;

	return ret;
}