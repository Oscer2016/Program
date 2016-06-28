#include <stdio.h>
#define N 10
void mat_saddle(float a[][N],int m,int n)
{
	int i,j,k,maxj,sadnum;
	float tmax;
	sadnum=0;
	for (i=0; i<m; i++)
	{
		maxj=0;			//第i行最大值所在列号
		tmax=a[i][0];	//第i行的最大值
		for (j=1; j<n; j++)
		{
			if (tmax<a[i][j])	//找到在固定行号i下最大数据的列号
			{
				tmax = a[i][j];
				maxj = j;
			}
		}
		for (k=0; k<m; k++)
			if (tmax>a[k][maxj])
				break;		//如果不是就退出循环
		if (k<m)
			continue;		//继续找其他满足条件的元素
		printf("array[%d][%d]=%f\n",i,maxj,a[i][maxj]);
		sadnum++;
	}
	if (sadnum==0)
		printf("No saddle point\n");
}
//从键盘读入数组元素
void readmatrix(float array[][N],int m,int n)
{
	int i,j;
	printf("请输入%d×%d个矩阵元素:\n",m,n);
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf("%f",&array[i][j]);
}
//输出数组元素
void outputmat(float array[][N],int m,int n)
{
	int i,j;
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%5.1f",array[i][j]);
		printf("\n");
	}
}
int main(void)
{
	float a[10][10];
	int m,n;
	m=3;
	n=4;
	readmatrix(a,m,n);
	outputmat(a,m,n);
	mat_saddle(a,m,n);
	return 0;
}
