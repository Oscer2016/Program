#include <stdio.h>
int main(void)
{
	int i,x,m,l,h,a[10];

	printf("input 10 numbers:\n");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("��������ҵ�����");
	scanf("%d",&x);
	
	l=0;
	h=9;
	do{
		m = (l+h) / 2;
		if (x == a[m])
		{
			printf("���ҳɹ���%d �������е�λ����: %d\n",x,m+1);
			break;
		}
		else if (x>a[m])
			l = m + 1;
		else
			h = m - 1;
	}while (l<=h);
	
	if (l>h)
		printf("����ʧ�ܣ�%d ���ڴ������С�",x);
	
	return 0;
}