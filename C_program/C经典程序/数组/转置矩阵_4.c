#include <stdio.h>
#define N 3
void transpose(int a[][N],int m,int n)
{
	int i,j,t;
	for (i=0; i<m; i++)
		for (j=0; j<i; j++)
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
}
void printm(int a[][N],int m,int n)
{
	int i,j;
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%3d ",a[i][j]);
		printf("\n");
	}
}
int main(void)
{
	int a[][N]={{1,2,3},{4,5,6},{7,8,9}};
	printf("before transpose:\n");
	printm(a,3,3);
	printf("after transpose:\n");
	transpose(a,3,3);
	printm(a,3,3);
	return 0;
}
