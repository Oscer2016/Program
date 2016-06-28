#include <stdio.h>
#include <math.h>
int havesamenum(int num)
{
	int i = 0,j;
	char a[10] = {0};

	while (num > 0)
	{
		j = num % 10;
		a[j] += 1;
		num = num / 10;
	}
	while (a[i] <= 1 && i < 10)
		i++;
	if (i < 10)
		return 1;
	else 
		return 0;
}
int main(void)
{
	int i,j,m;
	m = (int)sqrt(99999);
	for (i = 1; i < m; i++)
	{
		j = i * i;
		if (1 == havesamenum(j))
			printf("%6d\t",j);
	}
	return 0;
}
