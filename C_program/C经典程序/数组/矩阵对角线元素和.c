#include <stdio.h>
int main(void)
{
	int i,j,s1=0,s2=0;
	int a[3][3];
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			scanf("%d",&a[i][j]);
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
		{
			if (i == j)
				s1 += a[i][j];
			if (i+j == 2)
				s2 += a[i][j];
		}
	printf("%d %d\n",s1,s2);
	return 0;
}