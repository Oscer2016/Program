#include <stdio.h>
int main(void)
{
	int i,x,a[10];

	printf("input 10 numbers:\n");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("��������ҵ�����");
	scanf("%d",&x);
	for (i=1; i<10; i++)
		if (x==a[i])
		{
			printf("���ҳɹ���%d �������е�λ����: %d\n",x,i+1);
			break;
		}
	if (i>=10)
		printf("����ʧ��!\n");
	
	return 0;
}