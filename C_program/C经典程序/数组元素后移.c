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
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d",&number[i]);
	scanf("%d",&m);
	move(number,n,m);
	for (i=0; i<n; i++)
		printf("%d ",number[i]);
	printf("\n");
	return 0;
}