#include <stdio.h>
int main(void)
{
	int i,k,t,a[11];
	printf("请输入10个数：");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("请输入待插入的数,待插入的位置：");
	scanf("%d%d",&k,&t);
	if (t<1 || t>11)
	{
		printf("插入位置有误！\n");
		return -1;
	}
	
	for (i=9; i>=t-1; i--)
		a[i+1]=a[i];
	a[t-1]=k;
	
	for (i=0; i<11; i++)
		printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}