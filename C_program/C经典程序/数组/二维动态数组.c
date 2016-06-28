#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n1,n2;
	int **array,i,j;
	puts("输入一维数组长度：");
	scanf("%d",&n1);
	puts("输入二维数组长度：");
	scanf("%d",&n2);
	//先遵循从外层到里层，逐层申请的原则：
	//第一维，开辟元素个数为n1的指针数组，用来存放二维数组每行首地址
	array = (int **)malloc(sizeof(int *)*n1);
	if (array == NULL)	//内存申请失败，提示退出
	{
		printf("out of memory,press any key to quit...\n");
		exit(0);	//终止程序运行，返回操作系统
	}
	for (i=0; i<n1; i++)
	{
		array[i]=(int *)malloc(sizeof(int)*n2);
		if (array == NULL)	//内存申请失败，提示退出
		{
			printf("out of memory,press any key to quit...\n");
			exit(0);	//终止程序运行，返回操作系统
		}
		for (j=0; j<n2; j++)
		{
			array[i][j]=i+j+1;
			printf("%d\t",array[i][j]);
		}
		puts("");
	}
	//释放内存，遵循从里层往外层，逐层释放的原则
	for (i=0; i<n1; i++)
		free(array[i]);	//释放第二维指针
	free(array);	//释放一维指针
	return 0;

}