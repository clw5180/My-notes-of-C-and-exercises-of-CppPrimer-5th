#ifndef MYSTACK_H_
#define MYSTACK_H_

struct MyStruct
{
	char szName[64]; //sz����String with Zero End, Ҳ������'\0'��β���ַ���
};

class MyStack
{
public:
	MyStack(unsigned int bufSize);
	~MyStack();
	bool push(MyStruct data);
	bool pop(MyStruct &data);


private:
	MyStruct*    m_pBuffer;
	unsigned int m_bufSize;
	unsigned int m_count;
};

#endif
