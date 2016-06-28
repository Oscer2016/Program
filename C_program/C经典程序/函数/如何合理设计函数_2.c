/*
	判断一个数字是否是素数
	用单独的函数来实现, 代码的可重用性提高	
*/

# include <stdio.h>

int IsPrime(int val)
{
	int i;

	for (i=2; i<val; ++i)
	{
		if (0 == val%i)
			break;
	}
	if (i == val)
		return 1;
	else
		return 0;
}

int main(void)
{
	int val;
	int i;

	scanf("%d", &val);
	if ( IsPrime(val) )
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}