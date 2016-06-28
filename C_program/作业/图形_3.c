#include <stdio.h>
int main(void)
{
	int i,j;
	
	for (i = 1; i <= 9; i++)
	{
		for (j = 9; j >= i; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}