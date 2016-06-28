#include <stdio.h>
#include <string.h>
void count(char str[])
{
	int i,letters=0,digits=0,spaces=0,others=0;				
	
	for (i=0; i<strlen(str); i++)
	{
		if (isalpha(str[i]))	letters++;
		else if (isdigit(str[i]))	digits++;
		else if (isspace(str[i]))	spaces++;
		else others++;
	}
	printf("%d %d %d %d",letters,digits,spaces,others);
}
int main(void)
{
	char str[100];
	gets(str);
	count(str);
	return 0;
}