#include <stdio.h>
int main(void)
{
	int i;
	long f, f1=1, f2=1;
	
	printf("%ld %ld ",f1,f2);
	
	for(i=3; i<=20; i++)
	{
		f = f1 + f2;
		printf("%ld ",f);
		f1 = f2;
		f2 = f;
	}
	printf("\n");
	return 0;
}