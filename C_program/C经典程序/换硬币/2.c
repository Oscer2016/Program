#include <stdio.h>
int main(void)
{
	int i, j, k;
	
	for (i=0; i<=50; i++)
		for (j=0; j<=50; j++)
			for (k=0; k<=20; k++)
			{
				if ((i+2*j+5*k==100) && (i+j+k==50))
					printf("1�֣�%d  2�� ��%d  3�֣�%d \n",i,j,k);
			}
	
	return 0;
}