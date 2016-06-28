/*************************************************************************
	> File Name: 3.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月26日 星期四 13时36分23秒
 ************************************************************************/

#include <stdio.h>
int main(void)
{
    int m,n,i;
    printf("m,n=");
    scanf("%d%d",&m,&n);
    if (m < n)
    {
        i = m; 
        m = n; 
        n = i;
    }
    for (i=n; i>=1; i--)
        if (m%i==0 && n%i==0)
            break;
    printf("greatest common divisor is : %d\n",i);
    printf("lowest common multiple is : %d\n",m*n/i);
    return 0;
}
