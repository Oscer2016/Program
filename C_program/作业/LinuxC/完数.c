#include <stdio.h>
int main(void)
{
	int i, n, s;
	printf("100以内的完数是: ");

	for (n=2; n<=100; n++)
	{
		s=0;
		for (i=1; i<=n/2; i++)
		{
			if (n % i == 0)
				s += i;
		}
		if (n == s)
			printf("%d ",n);
	}
	printf("\n");

	return 0;
}
