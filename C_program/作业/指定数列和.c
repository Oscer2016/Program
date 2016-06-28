#include <stdio.h>
int main(void)
{
	int x,n,i,sum=0;

	scanf("%d%d",&x,&n);
	for (i=1; i<=n; i++)
	{
		sum+=x;
		x+=1;
	}
	printf("%d\n",sum);
		
	return 0;
}