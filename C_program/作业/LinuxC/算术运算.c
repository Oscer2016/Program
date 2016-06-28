#include <stdio.h>
int main(void)
{
	float a,b,t;
	char c;
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
	{
	case '+': t = a + b; break;
	case '-': t = a - b; break;
	case '*': t = a * b; break;
	case '/': t = a / b; break;
	}
	printf("%.2f%c%.2f=%.2f",a,c,b,t);
	return 0;
}
