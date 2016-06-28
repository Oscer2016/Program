#include <stdio.h>
char *strcpy1(char *s1,char *s2)
{
	char *p=s1;	//用p保存s1接收来的实参字符数组的首地址
	while (*s1++ = *s2++);
	return p;	//通过函数值返回指针值
}
int main(void)
{
	char s[20];
	printf("%s\n",strcpy1(s,"Welcome to you!"));
}