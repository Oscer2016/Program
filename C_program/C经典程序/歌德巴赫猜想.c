/*************************************************************************
	> File Name: 1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月27日 星期五 19时36分36秒
 ************************************************************************/
/*
 * 歌德巴赫猜想:一个大于等于4的偶数可以表示成两个素数之和
*/
#include <stdio.h>
#include <math.h>

int fun(int a)
{
    int i,m;
    m=sqrt(a);
    for (i=2; i<=m; i++)
        if (a % i == 0)
            break;
    if (i>=m+1)
        return 1;
    else
        return 0;
}

int main(void)
{
    int a,b,c;
    printf("please input a even:\n");
    scanf("%d",&a);
    for (b=1; b<a; b++)
        if (fun(b) && fun(a-b))
            break;
    printf("%d=%d+%d",a,b,a-b);

    return 0;
}
