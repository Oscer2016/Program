#include <stdio.h>
int main(void)
{
	//str1���ڴ����������֣�str2���ڴ���������ĸ
	char str1[100],str2[100];
	char c;		//�����ʱ���ݵı���
	int i=0,j=0;
	printf("please input a $(0-99):\n");
	while ((c=getchar()) != '\n' && i<99 && j<99)
	{
		if (c>=48 && c<=57)
			str1[i++]=c;		//�����������������str1
		else if (c>=65 && c<=90 || c>=97 && c<=122)
			str2[j++]=c;		//���������ĸ������str2
	}
	//���ַ���������־
	str1[i]='\0';
	str2[j]='\0';
	printf("the number array:%s\n",str1);
	printf("the letter array:%s\n",str2);
	return 0;
}