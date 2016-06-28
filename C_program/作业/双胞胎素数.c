# include <stdio.h>
int Prime(int val)
{
	int i;

	for (i=2; i<val; ++i)
	{
		if (val%i == 0)
			break;
	}
	if (i == val)
		return 1;
	else
		return 0;
}
int main(void)
{
	int a, b, i;
	
	scanf("%d%d",&a,&b);
	for (i=a; i<=b; i++)
	{
		if (Prime(i) && Prime(i+2) && (i+2)<=b)
			printf("(%d,%d)",i,i+2);
	}

	return 0;
}
