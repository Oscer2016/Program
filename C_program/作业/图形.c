#include <stdio.h>
int main(void)
{
	int i,j,n;

	scanf("%d",&n);	
	for (i=1; i<=(n+1)/2; i++)
	{
		if (i==1)
			printf("*\n");
		else
		{
			printf("*");
			for (j=1; j<=2*(i-1)-1; j++)
				printf("+");
			printf("*\n");
		}
	}
	for (i=(n-1)/2; i>1; i--)
	{
		printf("*");
		for (j=1; j<=2*(i-1)-1; j++)
			printf("+");
		printf("*\n");	
	}
	printf("*\n");
	
	return 0;
}