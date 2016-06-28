#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[201],b[201];		//最长200位
	int i,j,k,m,n;
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	k=n=strlen(b);
	if (m>k)
		k=m;			    //k是两个字符串长度的最大值
	a[k+1]=0;
	for (i=0;i<k;i++)	    //使数组a的字符串以a[k]右对齐
		a[k-i]=a[m-i-1];
	for (i=0;i<=k-m;i++)    //使数组a的高位补0
		a[i]='\0';
	for (i=0;i<k;i++)	 //使数组b的字符串以b[k]右对齐，这样两字符串都右对齐
		b[k-i]=b[n-i-1];
	for (i=0;i<=k-n;i++) //使数组b的高位补0
		b[i]='0';
	j=0;
	for (i=0;i<k;i++)	
	{
		j=(a[k-i]+b[k-i]+j-96);	//数字字符转换为整形数据相加
		a[k-i]=j%10+48;
		j=j/10;					//取出相加和整除的商，作为本位的进位数
	}
	if (a[0]=='\0')
		printf("%s\n",a+1);
	else
		printf("%s\n",a);

	return 0;
}
