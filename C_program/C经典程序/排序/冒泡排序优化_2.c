#include <stdio.h>
#define SIZE  10
int main(void)
{
	int i, j, flag;
	int a[SIZE];
	
	printf("������ %d ��������",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//ð������
	for (i=0; i<SIZE-1; i++)
	{
		for (j=0; j<SIZE-i-1; j++)
		{
			flag = 0;
			if (a[j]>a[j+1])
			{
				flag = 1;
				a[j] = a[j] ^ a[j+1];
				a[j+1] = a[j] ^ a[j+1];
				a[j] = a[j] ^ a[j+1];
			}
		}
		if (flag==0)
			break;
	}
	//���������
	printf("���������н��Ϊ��");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}