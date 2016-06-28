/*
	输出三个数的最小值
*/
#include <stdio.h>
int main(void)
{
	int x,y,z,min;
	printf("请输入三个整数（用空格隔开）：");
	scanf("%d%d%d",&x,&y,&z);
	min = x;
	if (y < min)		min = y;
	if (z < min)		min = z;
	printf("最小值为%d\n",min);
	return 0;
}
