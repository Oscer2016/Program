#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i=1;
	float x;
	double pow=1;

	printf("«Î ‰»Îx∫Õn:");
	scanf("%f%d",&x,&n);
	if (x == 0 && n == 0)
	{
		printf("error\n");
		return -1;
	}
	while (i <= fabs(n))
	{
		if (n > 0)
		{
			pow *= x;
			i++;
		}
		else if (n == 0)
		{
			pow = 1;
			break;
		}
		else
		{
			pow *= 1.0 / x;
			i++;
		}
	
	}
		
	printf("pow = %lf\n",pow);
	return 0;
}
