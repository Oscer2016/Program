#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int letters=0,digits=0,spaces=0,others=0;				
	
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))	letters++;
		else if (isdigit(ch))	digits++;
		else if (isspace(ch))	spaces++;
		else others++;
	}
	printf("%d %d %d %d\n",letters,digits,spaces,others);
	
	return 0;
}