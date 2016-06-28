#include <stdio.h>
int main(void)
{
	int i = -5;
	int j = 10;
	int k;

	k = i & j;
	printf("%d\n", k);

	k = i && j;
	printf("%d\n", k);

	return 0;
}
