#include <stdio.h>
int main(void)
{
	int i;
	int count = 1; //待判断的整数是2的count次方
	printf("请输入待判断整数：");
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