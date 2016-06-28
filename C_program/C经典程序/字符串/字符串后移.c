#include <stdio.h>
void move(int a[],int n,int m)
{
	int *p,end;
	end = *(a+n-1);
	for (p=a+n-1; p>a; p--)
		*p = *(p - 1);
	*a = end;
	m--;
	if (m>0)
		move(a,n,m);
}
int main(void)
{
	int number[100],n,m,i;
	printf("请输入总的个数:");
	scanf("%d",&n);
	printf("请输入%d个数，以空格分开：\n",n);
	for (i=0; i<n; i++)
		scanf("%d",&number[i]);
	printf("请输入后移的个数：");
	scanf("%d",&m);
	move(number,n,m);
	printf("移动后的 %d 个数为： \n",n);
	for (i=0; i<n; i++)
		printf("%d ",number[i]);
	printf("\n");
	return 0;
}