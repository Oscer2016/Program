#include <stdio.h>
#define SIZE  10
int main(void)
{
	int i, j, t;
	int low, mid, high;
	int a[SIZE];
	
	printf("������ %d ��������",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//�۰��������
	for (i=1; i<SIZE; i++)
	{
        t = a[i];
        low = 0; high = i-1;  // �����۰���ҵķ�Χ
        while(low <= high)
        {
            mid = (low+high)/2;  // ȡ�м��
            if(a[mid] > t)
                high = mid-1;
            else
                low = mid+1;
        }

        for(j=i-1; j>=high+1; --j) // ͳһ����
            a[j+1] = a[j];
        a[high+1] = t;    // ����
    }
	
	//���������
	printf("���������н��Ϊ��");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
