#include <stdio.h>
#define N 4
int main(void)
{
	int a[N][N],n=N,low=0,hi,i,j,t;
	for (hi=n,t=1; t<=n*n; low++,hi--)
	{
		for (i=low; i<hi; i++)
			a[low][i] = t++;
		for (i=low+1; i<hi; i++)
			a[i][n-low-1] = t++;
		for (i=hi-2; i>=low; i--)
			a[n-low-1][i] = t++;
		for (i=hi-2; i>low; i--)
			a[i][low] = t++;
	}
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
	return 0;
}