#include <stdio.h>
int main(void)
{
	int i,j,k,a[10];
	printf("请输入10个数：");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("请输入待删除的元素：");
	scanf("%d",&k);
	for (i=0; i<10; i++)
		if (a[i]==k)
		{
			for (j=i+1; j<10; j++)
				a[j-1]=a[j];
			break;
		}
	if (i>=10)
	{
		printf("未找到待删除的元素！\n");
		return -1;
	}

	for (i=0; i<9; i++)
		printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}