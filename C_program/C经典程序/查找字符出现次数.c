#include <stdio.h>

int subnum(char ch,char str[]);

int main(void)
{
	char s[100],a;
	
	printf("请输入一个字符串：");
	gets(s);
	printf("请输入待查找字符：");
	scanf("%c",&a);
	printf("字符%c在字符串%s中出现了%d次。\n",a,s,subnum(a,s));
	
	return 0;
}
int subnum(char ch,char str[])
{
	int num=0,i=0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			num++;
		i++;
	}
	return num;
}
