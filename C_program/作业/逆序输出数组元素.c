#include <stdio.h>
int main(void)
{
	int i,j;
	int a[10];

	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	for (j=9;j>=0;j--)
	{
		printf("%d",a[j]);
		if (j != 0)
			printf(" ");
	}
	return 0;
}