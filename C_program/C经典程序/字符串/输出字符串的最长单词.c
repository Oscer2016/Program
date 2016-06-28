#include <stdio.h>
#include <string.h>
int isletter(char *p)
{
	if ((*p>='a' && *p<='z')||(*p>='A' && *p<='z'))
		return 1;
	else 
		return 0;
}
int longest(char *p)
{
	int len=0,length=0,flag=1,place=0,i,point;
	int maxlen=strlen(p);
	for (i=0; i<=maxlen; i++)
	{
		if (isletter(p))
			if (flag)
			{
				point=i;
				flag=0;
			}
			else
				len++;
		else
		{
			flag=1;
			if (len>=length)
			{
				length = len;
				place = point;
				len = 0;
			}
		}
		p++;
	}
	return place;
}
int main(void)
{
	char line[80];
	int i;
	printf("请输入一行字符：");
	gets(line);
	printf("最长的单词是：");
	for (i=longest(line); isletter(&line[i]); i++)
		putchar(line[i]);
	puts("");
	return 0;
}