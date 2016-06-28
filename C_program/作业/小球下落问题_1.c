#include <stdio.h>
int main(void)
{
	float i,M,N,sum=0;

	scanf("%f%f",&M,&N);
	for (i=1; i<=N; i++)
	{
		sum += 3.0*M/2;
		M = M / 2;
	}
	printf("%.2f %.2f\n",M,sum-M);

	return 0;
}