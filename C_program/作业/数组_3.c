#include <stdio.h>
int main(void)
{
	int a[10];			//��������a������Ϊ10
	int i,max;
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);		//��������a
	max=a[0];			//��������a��һ��Ϊ���
	for (i=1;i<10;i++)
		if (a[i]>max)  max=a[i];
	printf("max=%d\n",max);
	return 0;
}