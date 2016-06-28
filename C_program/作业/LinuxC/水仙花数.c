#include <stdio.h>
int main(void)
{
	int g,s,b,n;
	
	printf("500以内的水仙花数为：\n");
	for (n=100; n<=500; n++)
	{
		g = n % 10;
		s = n / 10 % 10;
		b = n / 100;
		if (n == g*g*g + s*s*s + b*b*b)
			printf("%-4d",n);
	}

	return 0;
}
