#include <stdio.h>
int main(void)
{
	int a[3][4] = {{1,7,5,3},{2,11,1,4},{7,13,5,1}};
	int i,j,k,max,maxno,flag;
	for (i=0; i<3; i++)
	{
		max = a[i][0];
		maxno = 0;
		for (j=1; j<4; j++)
		{
			if (a[i][j]>max)
			{
				max = a[i][j];
				maxno = j;
			}
		}
		flag = 1;
		for (k=0; k<3; k++)
		{
			if (max>a[k][maxno])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("鞍点是第%d行第%d列：%d\n",i+1,maxno+1,max);
			break;
		}
	}
	if (!flag)
		printf("此数组无鞍点。\n");
		
	return 0;
}
