#include <stdio.h>
#define N 10
void magic_matrix(int a[][N],int n)
{
	int i,j,i1,j1,x;
	i=0;j=n/2;x=1;
	while (x<=n*n)
	{
		a[i][j]=x;
		x=x+1;
		i1=i;
		j1=j;
		i=i-1;			//����-45�ȶԽ�������
		j=j-1;
		if (i<0)	i=n-1;
		if (j<0)	j=n-1;
		if (a[i][j]!=0)		//�Ѿ�������������ռ��
		{
			i=i1+1;
			j=j1;
		}
	}
}
void outputmat(int a[][N],int m,int n)
{
	int i,j;
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
}
int main(void)
{
	int n;
	int a[N][N]={0};
	printf("����������(����)��");
	scanf("%d",&n);
	magic_matrix(a,n);
	outputmat(a,n,n);
	return 0;
}