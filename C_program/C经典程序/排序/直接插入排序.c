#include <stdio.h>
#define SIZE  10
int main(void)
{
	int i, j, t;
	int a[SIZE];
	
	printf("请输入 %d 个整数：",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//直接插入排序
	for (i=1; i<SIZE; i++)
	{
		t = a[i];
		for (j=i; j>0 && a[j-1]>t; j--)
			a[j] = a[j-1];
		a[j] = t;
	}
	
	//输出排序结果
	printf("按升序排列结果为：");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
