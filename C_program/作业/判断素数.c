#include <stdio.h>
int main(void)
{
	int i,val;
	printf("请输入一个正整数:");
	scanf("%d",&val);
	for (i=2;i<val;i++)
	{
		if (val%i==0)
			break;
	}
	if (i==val)
		printf("%d是素数。\n",val);
	else
		printf("%d不是素数。\n",val);
	return 0;
}