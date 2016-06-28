/*
	算法名称：有序集合的交集
	输入：长度分别为m和n的一维数组a，b，表示两个有序集合
	输出：一维数组c，c是a，b的交集，交集的元素个数为k
*/
int set_insection(int a[],int m,int b[],int n,int c[])
{
	int p=0,q=0,k=0;
	while (p<m && q<n)
	{
		if (a[p]==b[q])
		{
			c[k]=a[p];
			p++;
			q++;
			k++;
		}
		else if (a[p]<b[q])
			p++;
		else
			q++;
	}
	return k;
}
int main(void)
{
	int a[]={1,2,3,8,12,15};
	int b[]={2,5,8};
	int c[50],i,k;
	k = set_insection(a,6,b,3,c);
	printf("k=%d\n",k);
	for (i=0; i<k; i++)
		printf("%d ",c[i]);
	printf("\n");
	return 0;
}