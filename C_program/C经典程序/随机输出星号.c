#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, j, m, linenum;
	printf("请输入m:");
	scanf("%d",&m);
	srand((unsigned)time(NULL));	//调用时间函数做随机数产生器的种子
	for (i=1; i<=m; i++)
	{
		linenum = rand()%10 + 1;	//随机得到每行星号的个数（1~10）
		for (j=1; j<=linenum; j++)	//输出该行中的星号
			printf("*");
		printf("\n");
	}
	return 0;
}