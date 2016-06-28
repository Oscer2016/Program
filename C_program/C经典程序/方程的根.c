#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c;
	double x1,x2,real,imag,delta;
	scanf("%f%f%f",&a,&b,&c);
	delta = b * b - 4 * a * c;
	if (delta >= 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);	
		printf("x1=%.3lf x2=%.3lf\n",x1,x2);
	}
	else if (delta < 0)
	{
		real = -b / (2 * a);
		imag = sqrt(-delta) / (2 * a);
		printf("x1=%.3lf+%.3lfi ",real,imag);
		printf("x2=%.3lf-%.3lfi\n",real,imag);
	}
	
	return 0;
}
