#include <stdio.h>
int main(void)
{
	char str[100];
	int i,j;
	printf("������һ���ַ������Իس���������\n");
	gets(str);
	for (i=0,j=0; str[i] != '\0'; i++,j++)
	{
		if (str[j] == 'c')
			i--;
		else
			str[i] = str[j];
	}
	puts(str);
	return 0;
}