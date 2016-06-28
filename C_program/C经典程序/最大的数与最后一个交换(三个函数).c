#include <stdio.h>
void input(int *p)
{
	int i;
	for (i=0; i<10; i++)
		scanf("%d",p+i);
}
void output(int *p)
{
	int i;
	for (i=0; i<10; i++)
		printf("%d ",*(p+i));
}
void deal(int *p)
{
	int i,t,k,l,max,min;
	min=p[0];
	k=0;
	for (i=0; i<10; i++)
		if (p[i]<min)
		{
			min=p[i];
			k=i;
		}
	t=p[0];
	p[0]=p[k];
	p[k]=t;
	
	max=p[0];
	l=0;
	for (i=0; i<10; i++)
		if (p[i]>max)
		{
			max=p[i];
			l=i;
		}
	t=p[9];
	p[9]=p[l];
	p[l]=t;
}
int main(void)
{
	int a[10];
	input(a);
	deal(a);
	output(a);
	return 0;
}