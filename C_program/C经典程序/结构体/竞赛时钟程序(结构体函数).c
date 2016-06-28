#include <stdio.h>
#include <conio.h>
#include <windows.h>
struct clock
{
	int hours;
	int minutes;
	int seconds;
};
void display(struct clock t)	//��ʾʱ��ʱ�䣬�ṹ�����������Ϊ��������
{
	printf("\r%02d:",t.hours);
	printf("%02d:",t.minutes);
	printf("%02d",t.seconds);
}
//ʱ��ʱ��ÿ��1����и��£��ṹ��������Ϊ�����ķ���ֵ
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
	Sleep(1000);		//ϵͳ�ݶ�1��
	return t;
}
int main(void)
{
	struct clock cl={0,0,0};	//��ʼ����0��ʼ
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
			//��鵱ǰ�Ƿ��м������룬�����򷵻�һ����0ֵ�����򷵻�0
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