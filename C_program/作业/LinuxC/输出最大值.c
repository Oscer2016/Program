/*
	输出三个数的最大值
*/
#include <stdio.h>
int main(void)
{
    float x,y,z,max;
    printf("请输入三个数（用空格隔开）：");
    scanf("%f%f%f",&x,&y,&z);
    max = x;
    if (y >= max)	max = y;
    if (z >= max)       max = z;
    printf("最大值为%f\n",max);

    return 0;
}
