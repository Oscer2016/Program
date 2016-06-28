#include <stdio.h>
int main(void)
{
    int m,n,x,y,i,k;
    printf("m,n=");
    scanf("%d%d",&m,&n);
    x = m;
    y = n;
    if (m<n)
    {
        k=m;
        m=n;
        n=k;
    }
    for (k=1,i=2; i<=n; i++)
        while (m%i==0 && n%i==0)
        {
            m /= i;
            n /= i;
            k *= i;
        }
    printf("greatest common divisor is : %d\n",k);
    printf("lowest common multiple is : %d\n",x*y/k);

	return 0;
}
