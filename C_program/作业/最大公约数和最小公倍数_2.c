#include <stdio.h>
int main(void)
{
	int m, n, t, k;

	scanf("%d%d",&m,&n);
	if (m<n)
	{
		t = m;
		m = n;
		n = t;
	}
	if (m%n==0)
		printf("%d %d\n",n,m);
	k = n;
	while (m%k != 0)
	{
		k -= 1;
		if (m%k==0)
			printf("%d %d\n",k,m*n/k);	
	}
	
	return 0;
}