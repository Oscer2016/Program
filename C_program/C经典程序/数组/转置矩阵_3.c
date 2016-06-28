#include <stdio.h>
int main(void)
{
	int a[3][3],i,j,t;

	printf("请输入2行3列的数组元素：\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
			scanf("%5d",&a[i][j]);
		printf("\n");
	}

	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}

	for (i=0;i<2;i++)
		for (j=i;j<=3-i;j++)
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	
	printf("转置矩阵:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}