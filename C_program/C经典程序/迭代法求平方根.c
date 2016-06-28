#include<stdio.h>
#include<math.h>
int main(void)
{
	double x1,x2=1,a;
	scanf("%lf",&a); 
	while(fabs(x2-x1)>=1e-5)
	{	
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	printf("%.3f",x2);
	return 0;
}
