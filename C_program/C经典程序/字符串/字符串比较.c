#include <stdio.h>
int StrCompare(char *cp1,char *cp2)
{
	while (*cp1 && *cp2 && (*cp1 == *cp2))
	{
		cp1++;
		cp2++;
	}
	return *cp1 - *cp2;
}
int main(void)
{
	char a[10]="helloworld";
	char b[10]="hello";
	printf("%d\n",StrCompare(a,b));
	return 0;
}