#include <stdio.h>
#define M 3
#define N 4
int main(void)
{
	int a[M][N];
	int i,j,k,t,max,min;

	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			scanf("%d",&a[i][j]);
	for (i=0; i<M; i++)
	{
		max = a[i][0];
		t=0;
		for (j=0; j<N; j++)
			if (max < a[i][j])
			{
				max = a[i][j];
				t = j;
			}
		for (k=0; k<M; k++)
			if (a[i][t]> a[k][t])
				break;
		if (k == M)
			printf("%d�ǰ��㣬λ�ڵ�%d�У�%d�С�\n",a[i][t],i+1,t+1);
		if (i == M)
			printf("û�а��㡣\n");
	}
		
	return 0;
}