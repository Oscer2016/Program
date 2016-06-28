/*
	给出一个不多于5位的整数，要求: 
	1、求出它是几位数 
	2、分别输出每一位数字
	3、按逆序输出各位数字，例如原数为321,应输出123
	输入
	一个不大于5位的数字
	输出
	三行: 
	第一行 位数 
	第二行 用空格分开的每个数字，注意最后一个数字后没有空格 
	第三行 按逆序输出这个数
	样例输入

	12345

	样例输出

	5
	1 2 3 4 5
	54321
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, k, s=0;
	char str[6];
	
	scanf("%s",str);
	k=strlen(str);
	printf("%d\n",k);
	for (i=0; i<k; i++)
	{
		printf("%c",str[i]);
		if (i != k-1)
			printf(" "); 
	}
	printf("\n");
	for (i=k-1; i>=0; i--)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}