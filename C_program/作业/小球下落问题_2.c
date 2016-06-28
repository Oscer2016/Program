#include <stdio.h>
int main(void)
{
	int n;
	float sum=100,i=50;
	for (n=2; n<=10; n++)
	{
		sum += 2 * i;
		i /= 2;
	}
	printf("总共经过了 %f 米。\n",sum);
	printf("第10次反弹 %f 米。\n",i);
	return 0;
}