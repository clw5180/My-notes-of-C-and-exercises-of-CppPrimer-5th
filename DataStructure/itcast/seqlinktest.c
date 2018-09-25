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

	//ѭ������
	for (int i = 0; i < SeqList_Length(list); i++)
	{
		Teacher *tmp = (Teacher*)SeqList_Get(list, i);
		if (tmp != NULL)
		{
			printf("tmp->age = %d\n", tmp->age);
		}
	}

	//ѭ��ɾ��
	for (int i = 0; i < SeqList_Length(list); i++)
	{
		SeqList_Delete(list, 0);
	}
	SeqList_Destroy(list);

	return 0;

/*
	//�������ҷ���һ���յ����Ա�
	SeqList* SeqList_Create(int capacity);

	//����һ�����Ա�list
	void SeqList_Destroy(SeqList* list);

	//��һ�����Ա�list�е�����Ԫ�����, ���Ա�ص�����ʱ�ĳ�ʼ״̬
	void SeqList_Clear(SeqList* list);

	//����һ�����Ա�list�е�����Ԫ�ظ���
	int SeqList_Length(SeqList* list);

	int SeqList_Capacity(SeqList* list);

	//��һ�����Ա�list��posλ�ô�������Ԫ��node
	int SeqList_Insert(SeqList* list, SeqListNode* node, int pos);

	//��ȡһ�����Ա�list��posλ�ô���Ԫ��
	SeqListNode* SeqList_Get(SeqList* list, int pos);

	//ɾ��һ�����Ա�list��posλ�ô���Ԫ��  ����ֵΪ��ɾ����Ԫ�أ�NULL��ʾɾ��ʧ��
	SeqListNode* SeqList_Delete(SeqList* list, int pos);
*/
   
}