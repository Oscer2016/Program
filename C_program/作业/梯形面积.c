/*
	���������
*/
#include <stdio.h>
int main(void)
{
	float a,b,h,s;
	printf("��ֱ��������ε��ϵס��µס��ߣ��ÿո��������");
	scanf("%f%f%f",&a,&b,&h);
	s = (a + b) * h / 2.0;
	printf("area = %6.3f\n",s);
	return 0;
}