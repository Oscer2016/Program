#include <stdio.h>
#include <string.h>
int main(void)
{
	char p[16];
	char s[4][20];
	int i,len;
	for (i=0; i<4; i++)
		scanf("%s",s[i]);
	len=strlen(s[0]);
	for (i=0; i<4; i++)
	{
		p[2*i]=s[i][len-2];
		p[2*i+1]=s[i][len-1];	//汉字占两个字符位置
	}
	p[2*i]='\0';
	puts("诗中藏意为:");
	puts(p);
	return 0;
}