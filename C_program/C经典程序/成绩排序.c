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
			k=i;//第i个数已经定
			for(j=i+1;j<4;j++)//从哪个元素开始排序
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
