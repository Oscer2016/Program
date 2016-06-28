#include <stdio.h>
int main(void)
{
	char *name[]={"follow me","c++","great wall","computer design"};
	char **p;
	int i;
	for (i=0; i<4; i++)
	{
		p = name + i;
		printf("%s\n",*p);
	}
	return 0;
}