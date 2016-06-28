#include <stdio.h>
char *StrCopy(char *desc,char *src)
{
	char *p=desc;
	while (*desc++ = *src++);
	return p;
}
int main(void)
{
	char a[10]="helloworld";
	char b[10]="hello";
	printf("%s\n",StrCopy(a,b));
	return 0;
}
