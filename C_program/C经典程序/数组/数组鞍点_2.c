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
			printf("�����ǵ�%d�е�%d�У�%d\n",i+1,maxno+1,max);
			break;
		}
	}
	if (!flag)
		printf("�������ް��㡣\n");
		
	return 0;
}
