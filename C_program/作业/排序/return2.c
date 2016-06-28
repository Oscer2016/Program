#include <stdio.h>
struct value
{
	int max;
	int min;
};

struct value *temp(int a,int b)
{
	//struct value *t;
	if (a>b)
	{
		temp->max=a;
		temp->min=b;
	}
	else
	{
		temp->min=a;
		temp->max=b;
	}
}
int main(void)
{
	struct value *t;
	int a,b;
	scanf("%d%d",&a,&b);
	t=temp(a,b);
	printf("%d %d\n",t->max,t->min);
	return 0;
}