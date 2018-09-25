#ifndef  __MY_SEQLIST_H__ 
#define __MY_SEQLIST_H__

typedef void SeqList;
typedef void SeqListNode;
//void的含义：链表或链表节点是什么类型都支持

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

#endif  //__MY_SEQLIST_H__
