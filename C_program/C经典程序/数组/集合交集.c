/*
	�㷨���ƣ����򼯺ϵĽ���
	���룺���ȷֱ�Ϊm��n��һά����a��b����ʾ�������򼯺�
	�����һά����c��c��a��b�Ľ�����������Ԫ�ظ���Ϊk
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