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
		k = i;
		for (j=i+1; j<SIZE; j++)
			if (a[k]>a[j])
				k = j;		//k��ָ����Сֵ
		if (i != k)		//��k != iʱ�Ž���������a[i]��Ϊ��С
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}

	}
	//���������
	printf("���������н��Ϊ��");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
