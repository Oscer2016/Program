#include<stdio.h>
void main()
{
	char str[256],*p=str; //��ֹ����ASCII�����127ʱ�ĸ�ֵ�ַ����¶�ch��Ѱַ����
	int ch[256]={0},min,i;
	gets(str);
	while (*p) 
	{ 
		ch[(*p)]++;
		p++;
	}
	min=0; 
	for (i=1;i<256;i++) 
		if (ch[min]>ch[i]) 
			min=i;
	for (i=0;i<256;i++) 
		if (ch[i]!=ch[min])
			printf("%c",i); //���ö���ַ����ǳ��ִ����������
	printf("\n");
} 