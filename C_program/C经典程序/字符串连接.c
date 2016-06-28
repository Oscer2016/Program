#include <stdio.h>
int main(void)
{
	char str1[80],str2[30],*ptr1=str1,*ptr2=str2;
	printf("input str1:");
	gets(str1);
	printf("input str2:");
	gets(str2);
	while (*ptr1)
		ptr1++;		//移动指针到串尾
	while (*ptr2)
		*ptr1++=*ptr2++;	//连接字符串	
	*ptr1='\0';		//写入字符串结束标志
	ptr1=str1;
	puts(ptr1);
	return 0;
}