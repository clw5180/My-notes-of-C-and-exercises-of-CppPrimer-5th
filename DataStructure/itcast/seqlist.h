#ifndef  __MY_SEQLIST_H__ 
#define __MY_SEQLIST_H__

typedef void SeqList;
typedef void SeqListNode;
//void�ĺ��壺���������ڵ���ʲô���Ͷ�֧��

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

#endif  //__MY_SEQLIST_H__
