#include <stdio.h>
#define SIZE 10
int main(void)
{
	int i, j, t, k;
	int a[SIZE];
	
	printf("请输入 %d 个整数：",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//简单选择排序
	for (i=0; i<SIZE-1; i++)
	{
		for (j=i+1; j<SIZE; j++)
			if (a[i]>a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	}
	//输出排序结果
	printf("按升序排列结果为：");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
