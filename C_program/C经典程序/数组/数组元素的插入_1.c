#include <stdio.h>
void main()
{
	int i,j,t;
    int a[10];
    for (i=0;i<9;i++)
        scanf("%d",&a[i]);
    scanf("%d",&a[9]);
    for (i=9;i>0;i--)
		if (a[i]<a[i-1])
		{
			t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
		}
	for (i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}
