#include <stdio.h>
char *strcpy1(char *s1,char *s2)
{
	char *p=s1;	//��p����s1��������ʵ���ַ�������׵�ַ
	while (*s1++ = *s2++);
	return p;	//ͨ������ֵ����ָ��ֵ
}
int main(void)
{
	char s[20];
	printf("%s\n",strcpy1(s,"Welcome to you!"));
}