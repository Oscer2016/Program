#include <stdio.h>
int main(void)
{

	int a[100]={0},i,j; 

	char c;

	while((c=getchar())!='\n')   /*��ȡ�ַ���ͳ��ÿ����ĸ���ִ���*/

	for (i=65;i<=90;i++)

	if(c==i||c==i+32) a[i]++ ;

	for (j=65;j<=90;j++) 
		/*���ͳ����Ϣ*/

	if (a[j]>0) printf("%c:%-3d\n",j+32,a[j]);

	return 0;

}