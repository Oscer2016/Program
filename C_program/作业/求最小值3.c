/*
	������������Сֵ
*/
#include <stdio.h>
int main(void)
{
	int i,j,k,min;
	printf("����������������");
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
	printf("����������С����Ϊ%d\n",min);
	return 0;
}