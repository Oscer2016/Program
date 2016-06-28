#include <stdio.h>
#include <string.h>

int strrcpy(char *a,char *b,int n)
{
	int len_b,i;
	len_b=strlen(b);
	if (n<len_b)
		return 0;
	for (i=len_b;i>=0;i--)
		a[n--]=b[i];
	return 1;
}

char *StrInsert(char *a,char *b,int pos)
{
	int len_a,len_b;
	char *p;
	len_b=strlen(b);
	len_a=strlen(a);
	p=a+pos;
	strrcpy(a,p,len_a+len_b);		//逆向拷贝，留出存放b的空间
	while (*b != NULL)				//这个循环实现将子串b拷贝到a中指定位置
	{
		*p=*b;
		p++;
		b++;
	}
	return a;
}

int main(void)
{
	char a[50]="aaaabbbcccc";
	char b[30]="tttt";
	printf("%s\n",StrInsert(a,b,4));
	return 0;
}