/*
	用两个函数来实现求1到某个数字之间所有的素数，并将其输出

	代码量更少，可重用性更高
*/


# include <stdio.h>

//本函数的功能是: 判断m是否是素数，是返回1，不是返回0
int IsPrime(int m)
{
	int i;
		
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return 1;
	else
		return 0;

}

//本函数的功能是把1到n之间所有的素数在显示器上输出
void TraverseVal(int n)
{
	int i;

	for (i=2; i<=n; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}
}

int main(void)
{
	int val;
 
	scanf("%d", &val);
	TraverseVal(val);

	return 0;
}