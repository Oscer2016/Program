#include <stdio.h>
int main(void)
{
	int a[10][10],i,j,k,m,n,d=1;
	printf("���������ά��m��n:");
	scanf("%d%d",&m,&n);
	for (k=0;;k++)		//k��ʾȦ��
	{
		i = k;
		for (j=k; j<n-k; j++)		//�ϱ�	
			a[i][j]=d++;
		if (d > m * n)	break;
		j = n-1-k;
		for (i=k+1; i<m-k; i++)		//�ұ�
			a[i][j]=d++;
		if (d > m * n)	break;
		i = m-1-k;
		for (j=n-2-k; j>=k; j--)	//�±�
			a[i][j]=d++;
		if (d > m * n)	break;
		j = k;
		for (i=m-2-k; i>k; i--)		//���
			a[i][j]=d++;
		if (d > m * n)	break;
	}
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}