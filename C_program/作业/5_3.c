#include <stdio.h>
int main(void)
{
	int i, n, t=0, s=0;
	
	printf("������һ��������n��");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		t += i;
		s += t;
	}
	printf("1+(1+2)+...+(1+2+...+n) = %d\n",s);
	return 0;
}