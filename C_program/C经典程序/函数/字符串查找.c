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
	printf(" �������ַ��� :");
 
	gets(str);                     
 
	printf(" ������Ҫ�������ַ��� :");
 
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
		printf(" �������ַ���֮����ַ�Ϊ :%s\n",ret_str);
 
	else 
		printf(" û���ҵ���Ҫ�������ַ��� \n");
}
int main(void)
{
 
	char str1[50],str2[50];                  
 
	char serch_str1[50],serch_str2[50];             
 
	char* ret_str1,* ret_str2;                   
 
	input(str1,serch_str1);
 
	ret_str1 = serch_str(str1,serch_str1);  
 
 
	printf(" ֱ�ӵ��ú��� serch_str()\n");
 
	print(ret_str1);
 
	input(str2,serch_str2);
 
	fun = serch_str;
 
	ret_str2 = fun(str2,serch_str2);
 
	printf(" ʹ�ú���ָ�� fun ���ú��� serch_str()\n");
 
	print(ret_str2);
 
	return 0;
}
#endif