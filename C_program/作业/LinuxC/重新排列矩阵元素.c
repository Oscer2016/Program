#include <stdio.h>
#define N 3
#define M 4
int main(void)
{
	int a[N][M];
	int i,j,k,t;
	for (i=0; i<N; i++)
		for (j=0; j<M; j++)
			scanf("%d",&a[i][j]);
	for (k=0; k<N; k++)
	{
		for (i=0; i<M-1; i++)
		{
			for (j=0; j<M-i-1; j++)
				if (a[k][j]>a[k][j+1])
				{
					t = a[k][j];
					a[k][j] = a[k][j+1];
					a[k][j+1] = t;
				}
		}
	}
	for (k=0; k<M; k++)
	{
		for (i=0; i<N-1; i++)
		{
			for (j=0; j<N-i-1; j++)
				if (a[j][k]<a[j+1][k])
				{
					t = a[j][k];
					a[j][k] = a[j+1][k];
					a[j+1][k] = t;
				}
		}
	}
	for (i=0; i<N; i++)
	{
		for (j=0; j<M; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}