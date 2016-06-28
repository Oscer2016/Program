#include <stdio.h>
int main(void)
{
	int i, n, t=1, s=0;
	
	printf("请输入一个正整数n：");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		t *= i;
		s += t;
	}
	printf("%d\n",s);
	
	return 0;
}