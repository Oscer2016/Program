#include <stdio.h>
int main(void)
{
	int i, j, n;
	long t, s=0;
	printf("������һ��������n:");
	scanf("%d",&n);

	for (i=1; i<=n; i++)
	{
		t = 1;
		for (j=1; j<=i; j++)
			t *= j;
		s += t;
	}
	printf("%ld\n",s);
	
	return 0;
}