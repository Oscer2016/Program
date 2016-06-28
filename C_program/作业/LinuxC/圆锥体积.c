/*
   求圆锥体积
*/
#include <stdio.h>
#define PI 3.1415
int main(void)
{
	float r,h,v;
	printf("please input r,h:");
	scanf("%f%f",&r,&h);
	v = PI * r * r * h/3.0;
	printf("体积=%f\n",v);
	return 0;
}
