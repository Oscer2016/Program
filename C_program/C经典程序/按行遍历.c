#include <stdio.h>
int main(void)
{
	int a[20][50] = {{2,3,5},{6,3,7}};
	int i,j;

	for (i=0; i<20; i++)
	{
		for (j=0; j<50; j++)
			printf("%-2d",a[i][j]);
	}
	
	return 0;
}