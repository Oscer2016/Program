#include <stdio.h>
int fun(int x)
{
	if (x==0 || x==1)
		return 1;
	else
		return x*fun(x-1);
}

int main(void)
{
	int k,m;
	printf("请输入k和m:");
	scanf("%d%d",&k,&m);
	printf("组合数为%.2f\n",(float)fun(k)/(fun(m)*fun(k-m)));
	return 0;
}
