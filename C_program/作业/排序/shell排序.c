#include <stdio.h>
void shell(int *a,int n)
{
	int i, j, k, x;
	k = n / 2;		//¼ä¾àÖµ
	while (k>=1)
	{
		for (i=k; i<n; i++)
		{
			x = a[i];
			j = i - k;
			while (j>=0 && x<a[j])
			{
				a[j+k] = a[j];
				j -= k;
			}
			a[j+k] = x;
		}
		k /= 2;
	}
}
int main(void)
{
	int i;
	int a[7] = {1,6,5,3,8,4,2};
	
	shell(a,7);
	for (i=0; i<7; i++)
		printf("%-2d",a[i]);
	printf("\n");
	
	return 0;
}