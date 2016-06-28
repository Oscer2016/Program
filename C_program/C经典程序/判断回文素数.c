#include <stdio.h>
int prime(int m);
int huiwen(int n);

int main(void)
{
	int t;

	printf("请输入一个数：");
	scanf("%d",&t);
	if (huiwen(t) && prime(t))
		printf("%d 是回文素数。\n",t);

	return 0;
}

int prime(int m)
{
	int i;

	for (i=2; i<m; ++i)
	{
		if (m%i == 0)
			break;
	}
	if (i == m)
		return 1;
	else
		return 0;
}

int huiwen(int n)
{
	int s=0,t;
	t = n;
	while (t)
	{
		s = 10 * s + t % 10;
		t /= 10;
	}
	if (s==n)
		return 1;
	else
		return 0;
}

