/*
	一定要明白 10行的pArr[3] 和17行 19行的a[3] 是同一个变量
*/

# include <stdio.h>

void f(int * pArr, int len)
{
	pArr[3] = 88;  //10行
}

int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	
	printf("%d\n", a[3]);  //17行
	f(a, 6);
	printf("%d\n", a[3]);  //  19行

	return 0;
}
