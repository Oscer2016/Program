/*
	解决鸡兔同笼问题
*/
#include <stdio.h>
int main(void)
{
	int x=50,y=120,a,b;
	a = (4 * x - y) / 2;
	b = (y - 2 * x) / 2;
	printf("鸡 %d 只，兔 %d 只。\n",a,b);
	return 0;
}