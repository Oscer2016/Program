#include <stdio.h>
int main(void)
{
	int a=1,b=0;
	switch(a)
	{
		case 1 :switch(b)
				{
					case 0 : printf("***");break;
					case 1 : printf("@@@");break;
				}
		case 2 : printf("$$$\n");break;
		default: printf("###");
	}
	return 0;
}