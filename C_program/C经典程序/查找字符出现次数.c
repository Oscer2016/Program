#include <stdio.h>

int subnum(char ch,char str[]);

int main(void)
{
	char s[100],a;
	
	printf("������һ���ַ�����");
	gets(s);
	printf("������������ַ���");
	scanf("%c",&a);
	printf("�ַ�%c���ַ���%s�г�����%d�Ρ�\n",a,s,subnum(a,s));
	
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
