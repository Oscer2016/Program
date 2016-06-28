#include <stdio.h>
int main(void)
{
	int i, j, k;
	
	for (k=0; k<13; k++)
	{
		j = 50 - 4 * k;
		i = 50 - j - k;
		printf("1·Ö£º%d  2·Ö £º%d  3·Ö£º%d \n",i,j,k);
	}
	
	return 0;
}