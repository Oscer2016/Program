#include <stdio.h>
#define SIZE  10
int main(void)
{
	int i, j, d, t;
	int a[SIZE];
	
	printf("������ %d ��������",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//ϣ������
	for(d=SIZE/2; d>0; d/=2)  // �����仯
    {
        for(i=d; i<SIZE; ++i)  // ÿ���������н���ֱ�Ӳ�������
        {
            t = a[i];
            for(j=i-d; j>=0 && a[j]>t; j-=d)
                a[j+d] = a[j];  // ����
            a[j+d] = t;
        }
    }
	//���������
	printf("���������н��Ϊ��");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
