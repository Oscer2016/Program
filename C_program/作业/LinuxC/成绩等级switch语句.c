#include <stdio.h>
int main(void)
{
	int x,s;
	char rank;
	printf("请输入你的百分制成绩：");
	scanf("%d",&x);
	s = x / 10;
	switch (s)
	{
	case 10:switch (x)
		{
		case 100: printf("你的成绩等级为 A 。\n"); return 0;
		default : printf("输入成绩错误。\n"); return -1;
		}
	case  9: rank = 'A'; break;
	case  8: rank = 'B'; break;
	case  7: rank = 'C'; break;
	case  6: rank = 'D'; break;
	case  5: case 4: case 3: case 2: 
	case  1: rank = 'E'; break;
	case  0: switch (x)
		{
		case 9: case 8: case 7: case 6: case 5: case 4: 
		case 3: case 2: case 1: case 0: printf("你的成绩等级为 E 。\n");return 0;
		}
	default: printf("输入成绩错误。\n"); return -1;
	}
	printf("你的成绩等级为 %c\n",rank);
	return 0;
}
