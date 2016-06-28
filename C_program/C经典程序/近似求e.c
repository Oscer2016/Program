#include <stdio.h>
int f(int n)
{
	int i, t=1;
	for (i=1; i<=n; i++)
		t *= i;
	return t;
}
int main(void)
{
	int n=1;
	double s=1;
	
	while (1.0/f(n) >= 1e-7)
	{
		s += 1.0/f(n);
		n++;
	}
	printf("e ¡Ö %lf\n",s);
	
	return 0;
}