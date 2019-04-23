#include <iostream>

using namespace std;

//Quake-III Arena 3D�����󿪸��Ŵ���
float InvSqrt(float x)
{
	float xhalf = 0.5f*x;
	int i = *(int*)&x; // get bits for floating VALUE 
	i = 0x5f375a86 - (i >> 1); // gives initial guess y0
	x = *(float*)&i; // convert bits BACK to float
	x = x * (1.5f - xhalf * x*x); // Newton step, repeating increases accuracy
	x = x * (1.5f - xhalf * x*x); // Newton step, repeating increases accuracy
	x = x * (1.5f - xhalf * x*x); // Newton step, repeating increases accuracy

	return 1 / x;
}
/*
ע�⵽�������ֻ����һ�ε���������ʵ���Ǹ���û�õ�����ֱ�����㣩�����룬ʵ�飬
����������������ĺܺã����ұȱ�׼��sqrt()������4����Ҫ֪�����������Դ��ĺ�����
���Ǿ����ϸ���ϸ�Ļ���Ż��İ���
i = 0x5f3759df - ( i >> 1 );   �ټ���
y  = y * ( threehalfs - ( x2 * y * y ) );
���仰������˿������㣡����ע�⵽�������Ǿ��Ƕ�����λ���㣬�ٶȼ��죡
�ر��ںܶ�û�г˷�ָ���RISC�ṹCPU�ϣ��������Ǽ����Ч�ġ�
�㷨��ԭ����ʵ������,����ţ�ٵ�����,��x-f(x)/f'(x)�����ϵıƽ�f(x)=a�ĸ���
û��һ�����ƽ����������ôѭ��������ĵ��ǿ����(quake3����)����ţB�ĵط�����ѡ����
һ�����صĳ���0x5f3759df �������Ǹ��²�ֵ���������Ǽ�ע�͵���һ�У���һ�������ֵ�ǳ��ӽ�1/sqrt(n)��
��������ֻ��Ҫ2��ţ�ٵ����Ϳ��Դﵽ��������Ҫ�ľ��ȡ�
*/


int main()
{
	cout << InvSqrt(1) << endl;
	cout << InvSqrt(2) << endl;
	cout << InvSqrt(3) << endl;
	cout << InvSqrt(4) << endl;
	cout << InvSqrt(5) << endl;
	cout << InvSqrt(6) << endl;
	cout << InvSqrt(7) << endl;
	cout << InvSqrt(8) << endl;
	cout << InvSqrt(9) << endl;
	cout << InvSqrt(10000) << endl;
	return 0;
}
