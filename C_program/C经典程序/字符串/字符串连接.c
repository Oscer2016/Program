#include <stdio.h>
char *StrCat(char *to,char *from)
{
	char *p=to;
	while (*p++);
	p--;
	while (*p++ = *from++);
	return to;
}

int main(void)
{
	char a[30]="helloworld";
	char b[10]="hello";
	printf("%s\n",StrCat(a,b));
	return 0;
}