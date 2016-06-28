#include <stdio.h>
#include <string.h>
void output(char str[],int n)
{
	str += n-1;
	printf("%s",str);
}
int main(void)
{
	int m,n;
	char str[50];
	scanf("%d",&m);
	scanf("%s",str);
	scanf("%d",&n);
	output(str,n);
	return 0;
}