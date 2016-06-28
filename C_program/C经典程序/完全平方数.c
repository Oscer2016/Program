#include <stdio.h>
#include <math.h>
int main(void)
{
	int i,t;
	for (i=1; i<100; i++)
	{
		t=sqrt(i);
		if (t*t == i)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}