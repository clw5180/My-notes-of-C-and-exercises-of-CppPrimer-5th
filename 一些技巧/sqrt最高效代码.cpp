#include <iostream>

using namespace std;

//Quake-III Arena 3D引擎求开根号代码
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
注意到这个函数只用了一次叠代！（其实就是根本没用叠代，直接运算）。编译，实验，
这个函数不仅工作的很好，而且比标准的sqrt()函数快4倍！要知道，编译器自带的函数，
可是经过严格仔细的汇编优化的啊！
i = 0x5f3759df - ( i >> 1 );   再加上
y  = y * ( threehalfs - ( x2 * y * y ) );
两句话就完成了开方运算！而且注意到，核心那句是定点移位运算，速度极快！
特别在很多没有乘法指令的RISC结构CPU上，这样做是极其高效的。
算法的原理其实不复杂,就是牛顿迭代法,用x-f(x)/f'(x)来不断的逼近f(x)=a的根。
没错，一般的求平方根都是这么循环迭代算的但是卡马克(quake3作者)真正牛B的地方是他选择了
一个神秘的常数0x5f3759df 来计算那个猜测值，就是我们加注释的那一行，那一行算出的值非常接近1/sqrt(n)，
这样我们只需要2次牛顿迭代就可以达到我们所需要的精度。
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
