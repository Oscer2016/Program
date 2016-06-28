#include <stdio.h>
int main(void)
{
	int i, j, n, s;
	
	scanf("%d",&n);
	for (i=2; i<=n; i++)
	{
		s=0;
		for (j=1; j<=i/2; j++)
		{
			if (i % j == 0)
				s += j;
		}
		if (i == s)
		{
			printf("%d its factors are ",i);
			for (j=1; j<=i/2; j++)
			{
				if (i % j == 0)
					printf("%d ",j);
			}
			printf("\n");
		}
	}
	
	return 0;
}