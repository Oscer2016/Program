#include <stdio.h>
#define N 10
void mat_saddle(float a[][N],int m,int n)
{
	int i,j,k,maxj,sadnum;
	float tmax;
	sadnum=0;
	for (i=0; i<m; i++)
	{
		maxj=0;			//��i�����ֵ�����к�
		tmax=a[i][0];	//��i�е����ֵ
		for (j=1; j<n; j++)
		{
			if (tmax<a[i][j])	//�ҵ��ڹ̶��к�i��������ݵ��к�
			{
				tmax = a[i][j];
				maxj = j;
			}
		}
		for (k=0; k<m; k++)
			if (tmax>a[k][maxj])
				break;		//������Ǿ��˳�ѭ��
		if (k<m)
			continue;		//��������������������Ԫ��
		printf("array[%d][%d]=%f\n",i,maxj,a[i][maxj]);
		sadnum++;
	}
	if (sadnum==0)
		printf("No saddle point\n");
}
//�Ӽ��̶�������Ԫ��
void readmatrix(float array[][N],int m,int n)
{
	int i,j;
	printf("������%d��%d������Ԫ��:\n",m,n);
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf("%f",&array[i][j]);
}
//�������Ԫ��
void outputmat(float array[][N],int m,int n)
{
	int i,j;
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%5.1f",array[i][j]);
		printf("\n");
	}
}
int main(void)
{
	float a[10][10];
	int m,n;
	m=3;
	n=4;
	readmatrix(a,m,n);
	outputmat(a,m,n);
	mat_saddle(a,m,n);
	return 0;
}
