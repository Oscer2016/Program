#include <stdio.h>
int main(void)
{
	float a=2,b=1,s=0,t,n;

	for (n=1; n<=10; n++)
	{
		s += a/b;
		t = a;
		a += b;
		b = t;
	}
	printf("数列 2/1 + 3/2 + 5/3 + ...2/1 + 3/2 + 5/3 + ... 的前十项的和为 %f\n",s);
	
	return 0;
}
