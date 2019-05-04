#include <iostream>

using namespace std;

int Add(int a, int b) //clw note:实现加法功能，返回a+b
{
	int c = a^b;     //clw note：开始忘记有异或符号，用(a|b) & (~(a&b))搭了个半加器。。
	int s = (a&b) << 1; //clw note：全1时，进位才是1，因此是与的关系；另外注意由于是进位，因此需要左移
	if (s != 0)
	{
		Add(c, s);
	}
	else
	{
		return c;
	}
}
/*
正规写法：
int Add(int num1, int num2)
{
	int s = num1 ^ num2;
	int c = (num1 & num2) << 1;
	int result;
	if (c != 0)
		result = Add(s, c);
	else
		result = s;
	return result;	
}
*/

int Sum(int n)
{
	int t = 0;
	n && (t = Add(Sum(Add(n,-1)), n));
	return t;
}

int main()
{
	cout << Sum(100) << endl;  //clw note：n>4500爆栈
	return 0;
}
