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
	m_pBuffer[m_count++] = data;  //m_count������Ӧ��������ջ��������һ��Ԫ��
	                              //push֮��m_count++ָ����ջ��������һ��Ԫ��
	return true;
}

bool MyStack::pop(MyStruct &data)
{
	if (m_count == 0)
		return false;
	m_count--; //������Ӧջ��Ԫ��
	data = m_pBuffer[m_count]; //ջ��Ԫ�ص����������������ͱ���data
	return true;
}
