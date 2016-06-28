#include <stdio.h>
int main(void)
{
	int a[10];
	int i,k,max;
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	max=a[0];
	k=0;
	for (i=1;i<10;i++)
		if (a[i]>max)
		{
			max=a[i];
			k=i;
		}
	printf("%d %d",k+1,max);
	
	return 0;
}