#include <stdio.h>
int main(void)
{
	int a[20][20];
	int i,j,k,t,n;
	printf("ÇëÊäÈë½×Êı£º");
	scanf("%d",&n);
	k=(n+1)/2;
	for (i=0,t=1; i<k; i++,t++)
		for (j=0; j<n; j++)
		{
			a[i][j]=t;
			a[j][n-i-1]=t;
			a[n-i-1][j]=t;
			a[j][i]=t;
		}

	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
	
	return 0;
}