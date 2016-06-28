#include <stdio.h>
int main(void)
{

	int a[100]={0},i,j; 

	char c;

	while((c=getchar())!='\n')   /*获取字符并统计每个字母出现次数*/

	for (i=65;i<=90;i++)

	if(c==i||c==i+32) a[i]++ ;

	for (j=65;j<=90;j++) 
		/*输出统计信息*/

	if (a[j]>0) printf("%c:%-3d\n",j+32,a[j]);

	return 0;

}