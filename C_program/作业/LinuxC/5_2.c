#include <stdio.h>
int yue(int m,int n)
{
	int r;
	r = m % n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}
int bei(int m, int n)
{
	int t;
	t = yue(m,n);
	return m*n/t;
}
int main(void)
{
	int m,n;
	printf("请输入两个整数m,n:");
	scanf("%d%d",&m,&n);
	printf("最大公约数为: %d，最小公倍数为: %d\n",yue(m,n),bei(m,n));
	return 0;
}
