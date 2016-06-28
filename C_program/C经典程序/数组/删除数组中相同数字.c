#include <stdio.h>
int del_dup(int a[],int n,int b[])
{
	int i=1,k=1;
	b[0]=a[0];
	for (i=1; i<n; i++)
		if (a[i] != a[i-1])
			b[k++]=a[i];
	return k;
}
#define N 19
int main(void)
{
	int a[]={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10};
	int i,k,b[20];
	k = del_dup(a,N,b);
	printf("k=%d\n",k);
	for (i=0; i<k; i++)
		printf("%-4d",b[i]);
	printf("\n");
	return 0;
}