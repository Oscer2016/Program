#include<stdio.h>
int main()
{
	int a[4][2],sum[4],i,j,k,t,m;
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
		sum[i]=a[i][0]+a[i][1];
	}
		for(i=0;i<3;i++)
		{
			k=i;//��i�����Ѿ���
			for(j=i+1;j<4;j++)//���ĸ�Ԫ�ؿ�ʼ����
				if(sum[j]>sum[k])
					k=j;		
			if(k!=i)
			{
				for(j=0;j<2;j++)
				{
					t=a[k][j];
					a[k][j]=a[i][j];
					a[i][j]=t;
				}
				m=sum[i];
				sum[i]=sum[k];
				sum[k]=m;
			}
		}
	for(i=0;i<4;i++)
		printf("%d   %d   %d\n",sum[i],a[i][0],a[i][1]);
	return 0;
}
