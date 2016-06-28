#include <stdio.h>
int main(void)
{
	int i, max, a[10];
	
	printf("input 10 numbers:\n");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	max = a[0];
	for (i=0; i<10; i++)
		if (a[i]>max)
			max = a[i];
	printf("所有元素的最大值是：%d\n",max);

	return 0;
}