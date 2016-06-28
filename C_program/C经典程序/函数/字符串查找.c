#include <stdio.h>
#if(0)
int find_char(char **strings,char value)
{
	char *string;
	while ((string=*strings++) != NULL)
	{
		while (*string != '\0')
		{
			if (*string++ == value)
				return 1;
		}
	}
	return 0;
}
#endif
#if(1)
char* (*fun)(char *str,char *substr);
void input(char *str,char *substr)
{
	printf(" 请输入字符串 :");
 
	gets(str);                     
 
	printf(" 请输入要搜索的字符串 :");
 
	gets(substr);
	}
	int strlen(char *str)
	{
 
	int i=0;
 
	while(str[i]!='\0')
 
 
	i++;
 
	return i;
}
char* serch_str(char *str,char *serch_str)
{
	int i,j,k;
	k = strlen(str) - strlen(serch_str);  
	if ( k > 0 && NULL!=str && NULL!=serch_str) 
	{ 
		for ( i = 0; i <= k; i++ )
			for ( j = i; str[j] == serch_str[j-i]; j++ )
				if ( serch_str[j-i+1] == '\0' ) 
					return str+i+strlen(serch_str); 
	}
	return NULL;
}
void print(char* ret_str)
{ 
	if ( ret_str !=NULL )
		printf(" 所搜索字符串之后的字符为 :%s\n",ret_str);
 
	else 
		printf(" 没有找到所要搜索的字符串 \n");
}
int main(void)
{
 
	char str1[50],str2[50];                  
 
	char serch_str1[50],serch_str2[50];             
 
	char* ret_str1,* ret_str2;                   
 
	input(str1,serch_str1);
 
	ret_str1 = serch_str(str1,serch_str1);  
 
 
	printf(" 直接调用函数 serch_str()\n");
 
	print(ret_str1);
 
	input(str2,serch_str2);
 
	fun = serch_str;
 
	ret_str2 = fun(str2,serch_str2);
 
	printf(" 使用函数指针 fun 调用函数 serch_str()\n");
 
	print(ret_str2);
 
	return 0;
}
#endif