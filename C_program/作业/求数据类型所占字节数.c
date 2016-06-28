/*
	求数据类型所占字节数
*/
#include <stdio.h>
int main(void)
{
	printf("int 类型占的字节数为 %d。\n",sizeof(int));
	printf("short int 类型占的字节数为 %d。\n",sizeof( short int));
	printf("long int 类型占的字节数为 %d。\n",sizeof(long int));
	printf("char 类型占的字节数为 %d。\n",sizeof(char));
	printf("float 类型占的字节数为 %d。\n",sizeof(float));
	printf("double 类型占的字节数为 %d。\n",sizeof(double));
	printf("long double 类型占的字节数为 %d。\n",sizeof(long double));
	return 0;
}