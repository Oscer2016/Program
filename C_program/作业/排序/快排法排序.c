#include <stdio.h>
void quick(int *a, int i, int j)
{
	int m, n, t;
	int k;
	m = i;
	n = j;
	k = a[(i+j)/2];		//ѡȡ�Ĳ���
	do
	{
		while (a[m]<k && m<j)
			m++;		//�������ұ�k���Ԫ��
		while (a[n]>k && n>i)
			n--;		//���ҵ����ұ�kС��Ԫ��
		if (m<n)		//���ҵ��������������򽻻�
		{
			t = a[m];
			a[m] = a[n];
			a[n] = t;
			m++;
			n--;
		}
	}while (m<=n);
	//���õݹ�
	if (m<j)
		quick(a,m,j);
	if (n>i)
		quick(a,i,n);
}
int main(void)
{
	int i;
	int a[7] = {1,3,5,7,9,4,6};
	quick(a,0,7);
	for (i=0; i<7; i++)
		printf("%-2d",a[i]);
	printf("\n");

	return 0;
}
