#include <stdio.h>
int main(void)
{
	int m, n, r;	//r表示余数
	
	printf("请输入两个整数m,n:");
	scanf("%d%d",&m,&n);
	r = m % n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;	//求m和n相除的余数
	}
	printf("最大公约数：%d\n",n);
	
	return 0;
}