#include <stdio.h>
int main(void)
{
	int i, j, k;
	
	for (k=0; k<13; k++)
	{
		j = 50 - 4 * k;
		i = 50 - j - k;
		printf("1�֣�%d  2�� ��%d  3�֣�%d \n",i,j,k);
	}
	
	return 0;
}