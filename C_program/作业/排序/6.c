#include <stdio.h>
#define N 30
int main(void)
{
	char a[N],b[N];
	int i,j,s,k=0;
	gets(a);	
	for (i=0; a[i]; i++)
	{
		a[k]=a[i];
		for (j=i; a[j]; j++)
			if (a[k]==a[j])
			{
				for (s=0; b[s]; s++)
					if (a[j] != a[s])
						b[k++] = a[j];
			}
	}
	puts(b);
	
	return 0;
}