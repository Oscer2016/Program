#include <stdio.h>
int main(void)
{
	int i,j,n,k;
	printf("�������ʾ���ͷ���Ĵ�С������n:");
	scanf("%d",&n);
	printf("��СΪ%d�Ļ��ͷ������£�\n",n);
	for (i=1,k=1; i<=n; i++)
	{
		for (j=1; j<k; j++)		//kΪ��ǰ���м�Ҫ���������
			printf("%4d",j);
		for (j=1; j<=n - 2 * k + 2; j++)
			printf("%4d",k);
		for (j=k-1; j>=1; j--)
			printf("%4d",j);
		printf("\n");
		if (i<=n/2)
			k++;
		else
			k--;
		if (i == n/2 && n%2==0)		//nΪż��ʱҪ��k��������
			k--;
	}
	return 0;
}