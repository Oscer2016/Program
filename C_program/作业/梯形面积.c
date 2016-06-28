/*
	求梯形面积
*/
#include <stdio.h>
int main(void)
{
	float a,b,h,s;
	printf("请分别输入梯形的上底、下底、高（用空格隔开）：");
	scanf("%f%f%f",&a,&b,&h);
	s = (a + b) * h / 2.0;
	printf("area = %6.3f\n",s);
	return 0;
}