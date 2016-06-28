#include <stdio.h>
int main(void)
{
	int i,j;
	int a[100];
	
	for (i=0;i<100;i++)
		a[i]=i+1;
	for (i=1;i<100;i++)
	{
		if (a[i]==0)
			continue;
		for (j=i+1;j<100;j++)
			if (a[j]%a[i]==0)
				a[j]=0;
	}
	for (j=1;j<100;j++)
		if (a[j]!=0)
			printf("%3d",a[j]);
		printf("\n");
	
	return 0;
}