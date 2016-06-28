#include <stdio.h>
int main(void)
{
	int i, n, f1=1, f2=1, f;
	printf("请输入一个正整数n:");
	scanf("%d",&n);
	printf("%d %d ",f1,f2);
	for (i=3; i<=n; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		printf("%d ",f);
	}
	printf("\n");
	return 0;
}