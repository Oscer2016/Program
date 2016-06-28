#include <stdio.h>
#define N 3

typedef struct student
{
    char number[10];
    char name[10];
    char sex[8];
    int score[4];
    float aver;
}Stu;

void Input(Stu st[])
{
	int i, j, s;
	
	for (i=0; i<N; i++)
    {   
        printf("请分别输入第 %d 个学生的学号,姓名,性别:\n",i+1);
        scanf("%s%s%s",st[i].number,st[i].name,st[i].sex);
        printf("请输入第 %d 个学生四门课的成绩:\n",i+1);
        s = 0;
        for (j=0; j<4; j++)
        {
            scanf("%d",&stu[i].score[j]);
            s += stu[i].score[j];
        }
        stu[i].aver = s/4.0;
    }
}

void Sort(Stu st[])
{
	int i, j;
	Stu t;

    for (i=0; i<N-1; i++)
    {
        for (j=i+1; j<N; j++)
		    if (st[i].aver > st[j].aver)
		    {
		        t = st[i];
		        st[i] = st[j];
		        st[j] = t;
		    }
    }
}

void Output(Stu st[])
{
	int i, j;
	printf("\n\t学号\t姓名\t性别\t语文\t数学\t英语\t计算机\t平均成绩\n");
    for (i=0; i<N; i++)
    {    
        printf("NO.%d\t",i+1);
        printf("%s\t%s\t%s",st[i].number,st[i].name,st[i].sex);
        for (j=0; j<4; j++)
            printf("\t%d",st[i].score[j]);
        printf("\t%.2f\n",st[i].aver);
    }
}

int main(void)
{
    Stu st[N];
    
	Input(st);
	Sort(st);
	Output(st);
	
    return 0;
}
