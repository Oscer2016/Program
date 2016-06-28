#include <stdio.h>
int main(void)
{
	int day,x,y=1;
	for (day=10; day>1; day--)
	{
		x = (y + 1) * 2;
		y = x;
	}
	printf("第一天的桃子数：%d\n",y);

	return 0;

}
