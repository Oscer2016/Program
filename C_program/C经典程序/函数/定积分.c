/*
	梯形法求定积分函数
	a为积分下限，b为积分上限，n为积分区间划分成
	小区间的个数，f为指向被积函数的指针
*/
#include <stdio.h>
#include <math.h>
float jifen(float a,float b,int n,float (*f)(float x))
{
	float y,h;
	int i;
	y = 0.5 * (f(a) + f(b));		//也可以写成y = 0.5 * (（*f）(a) + （*f）(b))
	h = (b-a)/n;
	for (i=1; i<n; i++)
		y = y + f(a + i * h);
	return y*h;
}
//积分A1的被积函数
float fun1(float x)
{
	return 1+x*x;
}
//积分A2的被积函数
float fun2(float x)
{
	return x/(1+x*x);
}
//积分A3的被积函数
float fun3(float x)
{
	return (x+x*x)/(1+sin(x)+x*x);
}
//主函数，测试积分算法
int main(void)
{
	printf("A1=%8.2f\n",jifen(2,4,100,fun1));
	printf("A2=%8.2f\n",jifen(1,2.5,100,fun2));
	printf("A3=%8.2f\n",jifen(1,3,100,fun3));
	return 0;
}