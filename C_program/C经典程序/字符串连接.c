#include <stdio.h>
int main(void)
{
	char str1[80],str2[30],*ptr1=str1,*ptr2=str2;
	printf("input str1:");
	gets(str1);
	printf("input str2:");
	gets(str2);
	while (*ptr1)
		ptr1++;		//�ƶ�ָ�뵽��β
	while (*ptr2)
		*ptr1++=*ptr2++;	//�����ַ���	
	*ptr1='\0';		//д���ַ���������־
	ptr1=str1;
	puts(ptr1);
	return 0;
}