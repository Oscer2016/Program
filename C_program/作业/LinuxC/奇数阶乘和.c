#include <stdio.h>
int f(n)
{
	if (n == 1)
		return 1;
	else
		return n * f(n-1);
}
int main(void)
{
	long n,s=0,t=1;

	for (n=1; n<=99; n+=2)
		s += f(n);
	printf("1! + 3! + 5! + ... + 99! = %ld\n",s);

	return 0;
}
