/*
		测试%x %X %#x %#X的用法
*/

#include <stdio.h>
int main(void)
{
	int x = 47;  

	printf("%x\n", x);  //输出结果是:  2f
	printf("%X\n", x);	//输出结果是:  2F
	printf("%#X\n", x);	//输出结果是:  0X2F  %#X推荐使用
	printf("%#x\n", x);	//输出结果是:  0x2f

	return 0;
}
