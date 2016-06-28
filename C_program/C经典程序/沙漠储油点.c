#include <stdio.h>
int main(void)
{
	int i,k;	//表示储油点位置序号
	float d,d1;	//d为累计终点至当前储油点的距离，d1为i=n至始点的距离
	float oil[10],dis[10];
	printf("编号	距离（km）	油量(L)\n");
	dis[0]=1000;
	oil[0]=0;
	for (k=1;;k++)
	{
		dis[k]=dis[k-1]-500.0/(2*k-1);
		oil[k]=oil[k-1]+500;
		if (dis[k]<0)
			break;
	}
	dis[k]=0;	//端点处理
	oil[k]=oil[k-1]+dis[k-1]*(2*(k-1)+1);
	for (i=k;i>=0;i--)	//输出结果
		printf("%-2d	%-5.0f	\t%5.0f\n",k-i,dis[i],oil[i]);
	return 0;
}