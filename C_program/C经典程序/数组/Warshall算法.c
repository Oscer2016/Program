#include <stdio.h>
#define N 4
int main(void)
{
	int i,j,k;
	int a[N][N];

	printf("ÇëÊäÈë¾ØÕó£º\n");
	for (i=0; i<N; i++)
		for (j=0; j<N; j++)
			scanf("%d",&a[i][j]);
	printf("\n");
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			if (a[j][i] == 1)
			{
				for (k=0; k<N; k++)
					a[j][k] = a[j][k] | a[i][k];
			}
	}

	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	
	return 0;

}