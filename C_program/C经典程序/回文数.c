#include <stdio.h>
int main(void)
{
	int val,m,sum = 0;

	printf("请输入一个正整数：");
	scanf("%d",&val);

	m = 2 * val;
	while (m)
	{
		sum = 10 * sum + m % 10;
		m/=10;
	}
	if (2 * val == sum)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}