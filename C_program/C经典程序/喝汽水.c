#include <stdio.h>
void cal(int n)
{
	int k=0;
	while (n/3)
	{
		k+=n/3;
		n=n/3+n%3;
		if (n==2)
			k++;
	}
	printf("%d\n",k);
}

int main(void)
{
	int a[10];
	int i=0;
	scanf("%d",&a[i]);
	while (a[i] != 0)
		scanf("%d",&a[++i]);
	for (i=0;a[i];i++)
		cal(a[i]);
	return 0;
}