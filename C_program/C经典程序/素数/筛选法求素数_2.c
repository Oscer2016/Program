#include <stdio.h>
int main(void)
{
	int i;

	printf("%3d%3d%3d%3d",2,3,5,7);
	
	for ( i = 10; i <= 100; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 !=0 && i % 7 != 0)
			printf("%3d",i);
	}
	return 0;
}