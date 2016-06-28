#include <stdio.h>
#include <math.h>
int main(void)
{
	int i, j, k;
	for (i=2; i<=100; i++)
	{
		k = sqrt(i);
		for (j=2; j<=k; j++)
			if (0 == i % j)
				break;
		if (j>=k+1)
			printf("%d ",i);
	}
	printf("\n");

	return 0;
}