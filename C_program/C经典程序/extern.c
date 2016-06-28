#include <stdio.h>
int max(int x,int y)
{
	int z;
	z = x>y?x:y;
	return z;
}
int main(void)
{
	extern a,b;
	printf("%d\n",max(a,b));
	return 0;
}
int a=13,b=-8;