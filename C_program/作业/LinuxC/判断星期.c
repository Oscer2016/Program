#include <stdio.h>
int main(void)
{
	int m;
	long t;
	scanf("%ld",&t);
	m=t%7;
	switch (m)
	{
	case 0 : printf("%s\n","星期天"); break;
	case 1 : printf("%s\n","星期一"); break;
	case 2 : printf("%s\n","星期二"); break;
	case 3 : printf("%s\n","星期三"); break;
	case 4 : printf("%s\n","星期四"); break;
	case 5 : printf("%s\n","星期五"); break;
	case 6 : printf("%s\n","星期六"); break;
	}
	return 0;
}
