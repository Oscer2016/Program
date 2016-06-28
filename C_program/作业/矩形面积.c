/*
	求矩形面积
*/
#include <stdio.h>
int main(void)
{
	int x,y,area;
	printf("输入矩形的长和宽：");
	scanf("%d%d",&x,&y);
	area = x * y;
	printf("矩形的面积为：%d\n",area);
	return 0;
}