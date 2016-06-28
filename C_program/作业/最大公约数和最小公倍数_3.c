#include <stdio.h>
int main(void)
{
	int a,b,i,min;
	printf("请输入两整数：");
	scanf("%d%d",&a,&b);
	min = a < b ? a : b;
	for (i=min; i>=1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("最大公约数=%d\n",i);
			break;
		}
	}
	printf("最小公倍数=%d\n",a*b/i);
	return 0;
}