#include <stdio.h>
#define MAX x>y ? (x>z?x:z) : (y>z?y:z)
void max(float a,float b,float c)
{
	float max;
	max = a;
	if (b > max)		max = b;
	if (c > max)		max = c;
	printf("%.3f\n",max);
}
int main(void)
{
	float x,y,z;
	scanf("%f%f%f",&x,&y,&z);
	printf("%.3f\n",MAX);
	max(x,y,z);
	return 0;
}