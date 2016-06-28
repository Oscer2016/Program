#include <stdio.h>
int main(void)
{
	int m,i,flag;
	
	printf("请输入要判断的正整数m：");
	scanf("%d",&m);
	flag = 1;
	if (m < 2)
	{
		printf("%d 不是素数\n",m);
		return -1;
	}
	for (i = 2; i < m; i++)
		if (m % i == 0)
		{
			flag = 0;
			i = m;			//令i为m，使i<m不成立，使不是素数时退出循环
		}
	if (flag == 1)
		printf("%d 是素数\n",m);
	else
		printf("%d 不是素数\n",m);

	return 0;
}