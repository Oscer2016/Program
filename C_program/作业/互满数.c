#include <stdio.h>
int sum(int n)
{
	int i,s=0;
	for (i=1; i<=n/2; i++)
		if (n % i == 0)
			s += i;
	return s;
}
int main(void)
{
	int i,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		if (sum(i)>i && sum(sum(i)) == i)
			printf("%d %d\n",i,sum(i));
	return 0;
}