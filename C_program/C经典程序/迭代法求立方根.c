#include <stdio.h>
#define DELTA 1e-6
int main(void)
{
	double x,x1,x2,d;
	printf("please input an integer:");
	scanf("%lf",&x);
	if (x>-DELTA && x<DELTA)
		x2 = 0.0;
	else
	{
		x2 = x;
		do
		{
			x1 = x2;
			x2 = (2.0 * x1 + x / (x1 * x1)) / 3.0;
		} while ((d = x2 - x1) > DELTA || d < -DELTA);
	}
	printf("%lf\n",x2);
	return 0;
}