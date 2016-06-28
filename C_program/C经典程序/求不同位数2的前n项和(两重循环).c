#include <stdio.h>
int main(void)
{
	int i,j,n,s=0,t,k;
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		k=2;t=0;
		for (j=0; j<=i; j++)
		{
			t += k;
			k *= 10;
		}
		s += t;
	}
	printf("%d\n",s);
	return 0;
}