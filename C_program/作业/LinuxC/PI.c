/*
	½üËÆÊä³öPIÖµ
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int s=1,i=1;
	double p=0,t;

	while (fabs(t) >= 1e-6)
	{
		t = s * 1.0 / i;
		p += t;
		s = -s;
		i += 2;
	}
	printf("PI = %lf\n",4 * p);

	return 0;
}