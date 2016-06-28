#include <stdio.h>
int main(void)
{
	int i,x,a[10];

	printf("input 10 numbers:\n");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("输入待查找的数：");
	scanf("%d",&x);
	for (i=1; i<10; i++)
		if (x==a[i])
		{
			printf("查找成功，%d 在数组中的位置是: %d\n",x,i+1);
			break;
		}
	if (i>=10)
		printf("查找失败!\n");
	
	return 0;
}