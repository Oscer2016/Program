#include <stdio.h>
int main(void)
{
	float m,n,t;
	char d;
	
	printf("请输入运算符：");
	scanf("%c",&d);
	printf("请输入两个运算数（用空格隔开）：");
	scanf("%f%f",&m,&n);
	switch (d)
	{
	case '+': t = m + n; break;
	case '-': t = m - n; break;
	case '*': t = m * n; break;
	case '/': t = m * 1.0 / n; break;
	default : printf("输入错误!"); break;
	}
	printf("%f %c %f = %f\n",m,d,n,t);
	
	return 0;
}
