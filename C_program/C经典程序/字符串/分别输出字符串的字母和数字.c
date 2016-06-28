#include <stdio.h>
int main(void)
{
	//str1用于存放输入的数字，str2用于存放输入的字母
	char str1[100],str2[100];
	char c;		//存放临时数据的变量
	int i=0,j=0;
	printf("please input a $(0-99):\n");
	while ((c=getchar()) != '\n' && i<99 && j<99)
	{
		if (c>=48 && c<=57)
			str1[i++]=c;		//输入的是数字则存放入str1
		else if (c>=65 && c<=90 || c>=97 && c<=122)
			str2[j++]=c;		//输入的是字母则存放入str2
	}
	//加字符串结束标志
	str1[i]='\0';
	str2[j]='\0';
	printf("the number array:%s\n",str1);
	printf("the letter array:%s\n",str2);
	return 0;
}