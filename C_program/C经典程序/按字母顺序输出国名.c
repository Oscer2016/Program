#include <stdio.h>
#include <string.h>
void sort(char *name[],int n)
{
	char *pt;
	int i,j,k;
	for (i=0;i<n-1;i++)
	{
		k=i;
		for (j=i+1;j<n;j++)
			if (strcmp(name[k],name[j])>0)
				k=j;
		if (k != i)
		{
			pt = name[i];
			name[i] = name[k];
			name[k] = pt;
		}
	}
}
int main(void)
{
	char *name[] = {"China","America","Australia","France","German"};
	int i,n=5;
	sort(name,n);
	for (i=0;i<n;i++)
		printf("%s\n",name[i]);
	return 0;
}