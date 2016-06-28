#include <stdio.h>
#include <string.h>
struct student
{
	int number;
	char name[10];
	float score;
}s[5];
void sort(struct student a[])
{
	int i,j;
	struct student t;
	char temp[10];
	float tp;
	for (j=1; j<5; j++)
		for (i=0; i<5-j; i++)
			if (a[i].score>a[i+1].score)
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
}
int main(void)
{
	int i;
	for (i=0; i<5; i++)
	{
		printf("请输入第 %d 个学生信息:",i+1);
		scanf("%d%s%f",&s[i].number,&s[i].name,&s[i].score);
	}
	sort(s);
	printf("排序后学生信息为：\n");
	for (i=0; i<5; i++)
		printf("%d %s %.1f\n",s[i].number,s[i].name,s[i].score);
	return 0;
}