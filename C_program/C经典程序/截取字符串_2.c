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
	
	printf("������һ���ַ�����");
	gets(str);
	printf("�����뿪ʼ��ȡ��λ�ã�");
	scanf("%d",&m);
	printf("��ȡ����ַ���Ϊ��");
	puts(substr(str,m));

	return 0;
}