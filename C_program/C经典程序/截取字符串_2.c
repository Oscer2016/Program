#include <stdio.h>
char *substr(char *p,int m)
{
	static char s[80];
	int i=0;
	p = p + (m - 1);
	while (*p != '\0')
	{
		s[i] = *p;
		p++;
		i++;
	}
	s[i] = '\0';
	return s;
}
int main(void)
{
	char str[80];
	int m;
	
	printf("请输入一个字符串：");
	gets(str);
	printf("请输入开始截取的位置：");
	scanf("%d",&m);
	printf("截取后的字符串为：");
	puts(substr(str,m));

	return 0;
}