#include <stdio.h>
int main(void)
{
	int a,b,c,s,t,min;
	printf("����������������");
	scanf("%d%d%d",&a,&b,&c);
	s = a<b ? a : b;
	t = a<c ? a : c;
	min = s<t ? s :t;
	printf("����������СֵΪ%d\n",min);
	return 0;
}
