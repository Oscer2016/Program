#include <stdio.h>
int main(void)
{
	int i;
	int count = 1; //���жϵ�������2��count�η�
	printf("��������ж�������");
	scanf("%d",&i);
	while (i)
	{
		if (2 == i)
		{
			printf("YES: %d\n",count);
			break;
		}
		if (0 == i%2)
		{
			i /= 2;
			count++;
		}
		else
		{
			printf("NO\n");
			break;
		}
	}
	return 0;
}