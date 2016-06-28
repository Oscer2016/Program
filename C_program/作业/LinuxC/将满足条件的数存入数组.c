#include <stdio.h>
int main(void)
{
	int a[10] = {1010,2367,2132,3535,4748,6657,4563,2325,2346,6769};
	int c[10];
	int i,j,q,b,s,g,k=0;
	for (i=0; i<10; i++)
	{
		q = a[i]/1000;
		b = a[i]/100%10;
		s = a[i]/10%10;
		g = a[i]%10;
		if (q == s && b == g)
		{
			c[k] = a[i];
			k++;
		}
	}
	for (j=0; j<k; j++)
		printf("%d ",c[j]);
	printf("\n");
	return 0;
}