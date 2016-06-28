/*
	½üËÆÊä³öPIÖµ
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i=1;
	double p=0, s=1, t, PI;

	while (fabs(t) >= 1e-6)
	{
		t = s / i;
		p += t;
		s = -s;
		i += 2;
	}
	PI = 4 * p;
	printf("PI = %lf\n",PI);

	return 0;
}
