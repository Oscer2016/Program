#include <stdio.h>
int main(void)
{
	int x;
	char rank;
	printf("请输入百分制成绩：");
	scanf("%d",&x);
	if (x <= 0 || x > 100)
		printf("输入数据出错。\n");
		return -1;
	if (x > 90)
		rank = 'A';
	else if (x >= 80)
		rank = 'B';
	else if (x >= 70)
		rank = 'C';
	else if (x >= 60)
		rank = 'D';
	else
		rank = 'E';
	printf("你的成绩等级为 %c\n",rank);
	return 0;
}
	


