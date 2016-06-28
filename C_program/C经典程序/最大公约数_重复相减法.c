#include <stdio.h>
int main(void)
{
    int m,n,x,y;
    printf("m,n=");
    scanf("%d%d",&m,&n);
    x=m;
    y=n;    //保留m,n的原始值,用来求最小公倍数
    while (m != n)
    {
        if (m > n)
            m -= n;
        else 
            n -= m;
    }
    printf("最大公约数=%d\n最小公倍数=%d\n",m,x*y/m);

    return 0;
}
