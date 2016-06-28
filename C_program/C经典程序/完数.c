#include <stdio.h>
int main(void)
{
	int m, i, s;
	for (m=2; m<=500; m++)
	{
		s=0;
		for (i=1; i<=m/2; i++)
			if (0 == m % i)
				s += i;
			if (m == s)
				printf("%d ",m);
	}
	printf("\n");
	return 0;
}