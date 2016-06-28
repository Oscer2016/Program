/*
	求三个数的最大值
*/
#include <stdio.h>
int main(void)
{
	int a,b,c,max;
	printf("Please input three integer number:");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	if (b > max)		max = b;
	if (c > max)		max = c;
	printf("The largest number is %d\n",max);
	return 0;
}