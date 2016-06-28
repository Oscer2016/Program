#include <stdio.h>
#include <math.h>
int main(void)
{
	float pi = 1;
	float n = 1;
	int i;

	for (i = 1; i <= 100; i++,n++)
	{
		if (i % 2 == 0)
			pi *= n / (n + 1);
		else 
			pi *= (n + 1) / n;
	}
	pi = pi * 2;
	printf("PI = %.7f\n",pi);

	return 0;
}