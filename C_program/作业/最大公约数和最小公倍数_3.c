#include <stdio.h>
int main(void)
{
	int a,b,i,min;
	printf("��������������");
	scanf("%d%d",&a,&b);
	min = a < b ? a : b;
	for (i=min; i>=1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("���Լ��=%d\n",i);
			break;
		}
	}
	printf("��С������=%d\n",a*b/i);
	return 0;
}