#include <stdio.h>
int main(void)
{
	int a[10][10],i,j,k,m,n,d=1;
	printf("请输入矩阵维数m和n:");
	scanf("%d%d",&m,&n);
	for (k=0;;k++)		//k表示圈数
	{
		i = k;
		for (j=k; j<n-k; j++)		//上边	
			a[i][j]=d++;
		if (d > m * n)	break;
		j = n-1-k;
		for (i=k+1; i<m-k; i++)		//右边
			a[i][j]=d++;
		if (d > m * n)	break;
		i = m-1-k;
		for (j=n-2-k; j>=k; j--)	//下边
			a[i][j]=d++;
		if (d > m * n)	break;
		j = k;
		for (i=m-2-k; i>k; i--)		//左边
			a[i][j]=d++;
		if (d > m * n)	break;
	}
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}