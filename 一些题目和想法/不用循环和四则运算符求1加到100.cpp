#include <iostream>

using namespace std;

int Add(int a, int b) //clw note:ʵ�ּӷ����ܣ�����a+b
{
	int c = a^b;     //clw note����ʼ�����������ţ���(a|b) & (~(a&b))���˸����������
	int s = (a&b) << 1; //clw note��ȫ1ʱ����λ����1���������Ĺ�ϵ������ע�������ǽ�λ�������Ҫ����
	if (s != 0)
	{
		Add(c, s);
	}
	else
	{
		return c;
	}
}

int Sum(int n)
{
	int t = 0;
	n && (t = Add(Sum(Add(n,-1)), n));
	return t;
}

int main()
{
	cout << Sum(100) << endl;  //clw note��n>4500��ջ
	return 0;
}