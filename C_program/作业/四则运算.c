#include <stdio.h>
int main(void)
{
	float m,n,t;
	char d;
	
	printf("�������������");
	scanf("%c",&d);
	printf("�������������������ÿո��������");
	scanf("%f%f",&m,&n);
	switch (d)
	{
	case '+': t = m + n; break;
	case '-': t = m - n; break;
	case '*': t = m * n; break;
	case '/': t = m * 1.0 / n; break;
	default : printf("�������!"); break;
	}
	printf("%f %c %f = %f\n",m,d,n,t);
	
	return 0;
}
