#include <stdio.h>
#include <conio.h>
#include <windows.h>
struct clock
{
	int hours;
	int minutes;
	int seconds;
};
void display(struct clock t)	//显示时钟时间，结构体变量整体作为函数参数
{
	printf("\r%02d:",t.hours);
	printf("%02d:",t.minutes);
	printf("%02d",t.seconds);
}
//时钟时间每隔1秒进行更新，结构体类型作为函数的返回值
struct clock update(struct clock t)	
{
	t.seconds++;
	if (t.seconds==60)
	{
		t.seconds=0;
		t.minutes++;
	}
	if (t.minutes==60)
	{
		t.minutes=0;
		t.hours++;
	}
	if (t.hours==24)
		t.hours=0;
	Sleep(1000);		//系统暂定1秒
	return t;
}
int main(void)
{
	struct clock cl={0,0,0};	//初始化从0开始
	char ch;
	printf("Press \"s\" to start my clock,press \"e\" to end my clock.\n");
	printf("Please input:");
	//display(cl);
	ch = getchar();
	while (1)
	{
		if (ch == 's' || ch == 'S')
		{
			cl = update(cl);
			display(cl);
			//检查当前是否有键盘输入，若有则返回一个非0值，否则返回0
			if (kbhit())
			{
				ch = getch();
				if (ch == 'e' || ch == 'E')
					break;
			}
		}
		else if (ch =='e' || ch == 'E')
			break;
		else 
			ch =getch();
	}
	printf("\n");
	return 0;
}