#include <stdio.h>
#include <math.h>
int main(void)
{
	float x;
	double y;
	printf("请输入x：");
	scanf("%f",&x);
	if (x >= 0 && x < 20)
		y = 5 * x + 11;
	else if (x < 40)
		y = sin(x) + cos(x);
	else if (x < 60)
		y = exp(x) + 1;
	else if (x < 80)
		y = log(x + 1);
	else 
		y = 0;
	printf("y = %lf\n",y);
	return 0;
}

