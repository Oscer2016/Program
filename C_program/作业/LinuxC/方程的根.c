#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c,d;
	scanf("%f%f%f",&a,&b,&c);
	d = b * b - 4 * a * c;
	if (d >= 0)
		printf("x1=%.2f,x2=%.2f",(-b - sqrt(d))/(2 * a),(-b + sqrt(d))/(2 * a));
	
	return 0;
}
