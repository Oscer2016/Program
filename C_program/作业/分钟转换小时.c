/*
	将输入的分钟数转换为小时分钟格式   
*/
#include <stdio.h>
int main(void)
{
	int i,h,m;
	printf("请输入分钟数：");
	scanf("%d",&i);
	h = i / 60;
	m = i - 60 * h;
	printf("%d分钟<=>%d小时%d分钟\n",i,h,m);
	return 0;
}
