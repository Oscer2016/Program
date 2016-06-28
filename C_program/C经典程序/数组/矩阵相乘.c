#include <stdio.h>
int main(void)
{
	int i, j, k;
	int a[3][2] = {{1,2},{3,4},{5,6}};
	int b[2][3] = {{1,2,3},{4,5,6}};
	int c[3][3] = {0};
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			for (k=0; k<2; k++)
				c[i][j] += a[i][k] * b[k][j];

	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
			printf("%-5d",c[i][j]);
		printf("\n");
	}
	
	return 0;
}