/*
	求x的y次方
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x,y;
    printf("请输入x,y:");
    scanf("%lf%lf",&x,&y);
    printf("x的y次方为%lf\n",pow(x,y));
    return 0;
}
