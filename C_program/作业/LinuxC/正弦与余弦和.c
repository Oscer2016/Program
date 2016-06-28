#include <stdio.h>
#include <math.h>
#define PI 3.141592653
int main(void)
{
    int t;
    double s;
    printf("请输入角度：");
    scanf("%d",&t);
    s = t * PI /180;
    printf("正弦值与余弦值的和为%lf\n",sin(s)+cos(s));
    return 0;
}
