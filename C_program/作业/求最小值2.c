#include <stdio.h>
int main(void)
{
	int a,b,c,s,t,min;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	s = a<b ? a : b;
	t = a<c ? a : c;
	min = s<t ? s :t;
	printf("三个数的最小值为%d\n",min);
	return 0;
}
