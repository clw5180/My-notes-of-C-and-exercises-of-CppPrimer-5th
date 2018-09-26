#include "MyStack.h"
#include "iostream"


MyStack::MyStack(unsigned int bufSize):m_pBuffer(NULL),m_bufSize(0),m_count(0)
{
	if (bufSize < 10)
		bufSize = 10;
	m_bufSize = bufSize;
	m_pBuffer = new MyStruct[m_bufSize];
}


MyStack::~MyStack()
{
	if (m_pBuffer != NULL)
	{
		delete[] m_pBuffer;
		m_pBuffer = NULL;
	}
	m_bufSize = 0;
	m_count = 0;
}

bool MyStack::push(MyStruct data)
{
	if (m_count == m_bufSize)
		return false;
	m_pBuffer[m_count++] = data;  //m_count索引对应的正好是栈顶的上面一个元素
	                              //push之后m_count++指向新栈顶的上面一个元素
	return true;
}

bool MyStack::pop(MyStruct &data)
{
	if (m_count == 0)
		return false;
	m_count--; //索引对应栈顶元素
	data = m_pBuffer[m_count]; //栈顶元素弹出，赋给引用类型变量data
	return true;
}
