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
	int *q,*head,min=*p,t,i;
	q=p;
	head=p;
	for (i=1; i<10; i++)
	{
		p++;
		if (*p<min)
		{
			min=*p;
			q=p;
		}
	}
	t=*q;
	*q=*head;
	*head=t;
}
int main(void)
{
	int a[10];
	input(a);
	deal(a);
	output(a);
	return 0;
}