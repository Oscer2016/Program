#include <stdio.h>
#define SIZE 10
int main(void)
{
	int i, j, t, k;
	int a[SIZE];
	
	printf("������ %d ��������",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//��ѡ������
	for (i=0; i<SIZE-1; i++)
	{
		for (j=i+1; j<SIZE; j++)
			if (a[i]>a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	}
	//���������
	printf("���������н��Ϊ��");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
