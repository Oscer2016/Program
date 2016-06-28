/*************************************************************************
	> File Name: 1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月26日 星期四 13时53分45秒
 ************************************************************************/

#include <stdio.h>
int fun(int n,int r)
{
    int m;
    m = n % r;
    n /= r;
    if (n)
        fun(n,r);
    if (m<10)
        printf("%d\n",m);
    else
        printf("%c\n",m+87);
}

int main(void)
{
    int n,r;
    printf("n,r=");
    scanf("%d%d",&n,&r);
    fun(n,r);

    return 0;
}
