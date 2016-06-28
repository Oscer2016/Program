#include <stdio.h>
int main(void)
{
	int m,n;
	int p,r,t;

	scanf("%d%d",&m,&n);
	if (m < n)
	{
		t = n;
		n = m;
		m = t;
	}
	p = m * n; 
	while (n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d %d\n",m,p/m);
	
	return 0;
}