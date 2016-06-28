#include <stdio.h>
#include <string.h>
void reverse(char *str)
{
	char *p,*q,t;
	int n;
	n=strlen(str);
	p=str;
	q=&str[n-1];
	while (p<q)
	{
		t=*p;*p=*q;*q=t;
		p++;q--;
	}
}
int main(void)
{	
	char str[100];
	gets(str);
	reverse(str);
	printf("%s",str);
	return 0;
}