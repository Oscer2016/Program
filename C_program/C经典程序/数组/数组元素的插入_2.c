#include <stdio.h>
int main(void)
{
    int a[10];
    int i,j,k;
    for (i=0;i<9;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for (i=0;i<9;i++)
        if (k<a[i])
            {
                for (j=8;j>=i;j--)
                    a[j+1]=a[j];
                break;
            }
    a[i]=k;
    for (i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;

}
