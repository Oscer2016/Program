/*
	求三个数的最小值
*/
#include <stdio.h>
int main(void)
{
	int i,j,k,min;
	printf("请输入三个整数：");
	scanf("%d%d%d",&i,&j,&k);
	if (i > j)
	{
		if (i > k)
			min = k;
		else
			min = i;
	}
	else
	{
		if (j > k)
			min = k;
		else
			min = j;
	}
	printf("三个数中最小的数为%d\n",min);
	return 0;
}