#include <stdio.h>
#include <string.h>
void reverse(char *str)
{
	char *p,*q,t;
	int n;
	n=strlen(str);
	p=str;
	q=&str[n-1];
	while (p<q)
	{
		t=*p;*p=*q;*q=t;
		p++;q--;
	}
}
//此函数用于把十进制整数x转换为十六进制数字符串输出
char *dec2hex(int x,char a[])
{
	int i=0,rem;
	do{
		rem = x % 16;
		x = x / 16;
		if (rem<10)
			a[i]=48+rem;	//'0'字符的ASCII码为48
		else 
			a[i]=65+rem;	//‘A’字符的ASCII码为65
		i++;
	}while (x != 0);
	a[i]='\0';				//字符串结束标记
	reverse(a);
	return a;
}
int main(void)
{
	int d;
	char a[10];
	printf("请输入一个十进制正整数：");
	scanf("%d",&d);
	printf("%s\n",dec2hex(d,a));

	return 0;
}