#include <stdio.h>
int main(void)
{
	int a[10];			//定义数组a，长度为10
	int i,max;
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);		//输入数组a
	max=a[0];			//假设数组a第一个为最大
	for (i=1;i<10;i++)
		if (a[i]>max)  max=a[i];
	printf("max=%d\n",max);
	return 0;
}