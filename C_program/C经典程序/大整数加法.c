#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[201],b[201];		//�200λ
	int i,j,k,m,n;
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	k=n=strlen(b);
	if (m>k)
		k=m;			    //k�������ַ������ȵ����ֵ
	a[k+1]=0;
	for (i=0;i<k;i++)	    //ʹ����a���ַ�����a[k]�Ҷ���
		a[k-i]=a[m-i-1];
	for (i=0;i<=k-m;i++)    //ʹ����a�ĸ�λ��0
		a[i]='\0';
	for (i=0;i<k;i++)	 //ʹ����b���ַ�����b[k]�Ҷ��룬�������ַ������Ҷ���
		b[k-i]=b[n-i-1];
	for (i=0;i<=k-n;i++) //ʹ����b�ĸ�λ��0
		b[i]='0';
	j=0;
	for (i=0;i<k;i++)	
	{
		j=(a[k-i]+b[k-i]+j-96);	//�����ַ�ת��Ϊ�����������
		a[k-i]=j%10+48;
		j=j/10;					//ȡ����Ӻ��������̣���Ϊ��λ�Ľ�λ��
	}
	if (a[0]=='\0')
		printf("%s\n",a+1);
	else
		printf("%s\n",a);

	return 0;
}
