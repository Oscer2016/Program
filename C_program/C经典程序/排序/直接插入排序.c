#include <stdio.h>
#define SIZE  10
int main(void)
{
	int i, j, t;
	int a[SIZE];
	
	printf("������ %d ��������",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//ֱ�Ӳ�������
	for (i=1; i<SIZE; i++)
	{
		t = a[i];
		for (j=i; j>0 && a[j-1]>t; j--)
			a[j] = a[j-1];
		a[j] = t;
	}
	
	//���������
	printf("���������н��Ϊ��");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
