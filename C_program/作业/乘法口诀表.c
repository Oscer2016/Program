#include <stdio.h>
int main(void)
{
	int i,j;
	i=1;
	while (i<=9)
	{
		j=1;
		while (j<=i)
		{
			printf("%d*%d=%d\t",j,i,i*j);
			j++;
		}
	 printf("\n");
	 i++;
	}
	return 0;
}