#include <stdio.h>
#include <math.h>
void area(float a,float b,float c)
{
	float p,s;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.3f",s);
}
int main(void)
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	area(a,b,c);
	return 0;
}