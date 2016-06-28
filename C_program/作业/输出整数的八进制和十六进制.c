/*
	输出整数的八进制和十六进制
*/
#include <stdio.h>
int main(void)
{
	int x;
	printf("请输入一个整数 X :");
	scanf("%d",&x);
	printf("Octonary number:%o\n",x);
	printf("Hexadecimal number:%x\n",x);
	return 0;
}