#include <stdio.h>
int main(void)
{
	int score, n=0, sum=0;
	float ave;
	
	printf("请输入若干学生成绩（用空格隔开）：");
	scanf("%d",&score);
	printf("低于60分的学生成绩：");
	while (score>=0)
	{
		if (score<60)
			printf("%3d",score);
		sum += score;
		n++;
		scanf("%d",&score);
	}
	printf("\n");
	ave = sum * 1.0 / n;
	printf("这些学生的平均成绩为：%f\n",ave);

	return 0;
}