#include <stdio.h>
int main(void)
{
	int i,j,k,t;
	int a[100];
	scanf("%d",&k);
	for (i=0;i<k;i++)
		scanf("%d",&a[i]);
	for (j=0;j<k/2;j++)
	{
		t=a[j];
		a[j]=a[k-j-1];
		a[k-j-1]=t;
	}
	for (i=0;i<k;i++)
	{
		printf("%d",a[i]);
		if (i != k-1)
			printf(" ");
	}
	printf("\n");
	return 0;
}