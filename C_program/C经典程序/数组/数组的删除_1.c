#include <stdio.h>
int main(void)
{
	int i,t,a[10];
	printf("请输入10个数：");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("请输入待删除元素的位置：");
	scanf("%d",&t);
	if (t<1 || t>10)
	{
		printf("删除位置有误！\n");
		return -1;
	}
	
	for (i=t; i<10; i++)
		a[i-1]=a[i];
	
	for (i=0; i<9; i++)
		printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}