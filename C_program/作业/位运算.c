#include <stdio.h>
int main(void)
{
	int i = 3;
	int j = 5;
	int k,m,n,s,t;

	k = i & j;
	printf("3 & 5 = %d\n",k);

	m = i | j;
	printf("3 | 5 = %d\n",m);

	n = ~i; 
	printf("~3 = %d\n",n);

	s = i << 1;
	printf("3 << 1 = %d\n",s);

	t = i >> 1;
	printf("3 >> 1 = %d\n",t );
	return 0;
}