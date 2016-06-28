#include <stdio.h>
int is_primer(int val)
{
	int i;
	for (i=2;i<val;i++)
	{
		if (val%i==0)
			break;
	}
	if (i==val)
		return 1;
	else
		return 0;
}
int main(void)
{
	int val;
	printf("请输入一个正整数:");
	scanf("%d",&val);
	if (is_primer(val))
		printf("YES!\n");
	else 
		printf("NO!\n");
	return 0;
}

