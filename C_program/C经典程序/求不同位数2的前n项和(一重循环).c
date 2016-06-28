#include <stdio.h>
int main(void)
{
	int i,j,n,s=0,t=0,k=2;
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		t += k;
		s += t;
		k *= 10;		
	}
	printf("%d\n",s);
	return 0;
}