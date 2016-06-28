#include <stdio.h>
int main(void)
{
	int j=10;
	switch(10)
	{
		case 9 : j += 1;
		case 10: j += 2;
		case 11: j += 3;
		default: j += 4;
	}
	printf("j = %d\n",j);

	return 0;
}