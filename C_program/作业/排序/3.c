#include<stdio.h>
void main()
{
	char str[256],*p=str; //防止出现ASCII码大于127时的负值字符导致对ch的寻址错误
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
			printf("%c",i); //适用多个字符都是出现次数最少情况
	printf("\n");
} 