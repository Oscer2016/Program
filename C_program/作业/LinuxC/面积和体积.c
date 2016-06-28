#include <stdio.h>
#define PI 3.141593
int main(void)
{
    float r,h;
    printf("请输入圆的半径和圆柱的高：");
    scanf("%f%f",&r,&h);
    printf("圆的周长为%f\n",2*PI*r);
    printf("圆的面积为%f\n",PI*r*r);
    printf("圆球的表面积为%f\n",4*PI*r*r);
    printf("圆球的体积为%f\n",4*PI*r*r*r/3.0);
    printf("圆柱的体积积为%f\n",PI*r*r*h);
    return 0;
}
