#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c,p,area;
	scanf("%f%f%f",&a,&b,&c);
	p = (a + b + c) /2;
	area = sqrt(p * (p-a) * (p-b) * (p-c));
	printf("%.2f\n",area);
	return 0;
}
	
