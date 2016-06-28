#include <stdio.h>
#define N 30
struct student
{
    char number[10];
    char name[10];
    char sex[8];
    int score[4];
    float aver;
};

int main(void)
{
    struct student stu[N],t;
    int i,j,s;

    for (i=0; i<N; i++)
    {   
        s = 0;
        printf("请分别输入第 %d 个学生的学号,姓名,性别:\n",i+1);
        scanf("%s%s%s",stu[i].number,stu[i].name,stu[i].sex);
        printf("请输入第 %d 个学生四门课的成绩:\n",i+1);
        for (j=0; j<4; j++)
        {
            scanf("%d",&stu[i].score[j]);
            s += stu[i].score[j];
        }
        stu[i].aver = s/4.0;
    }
    for (i=0; i<N-1; i++)
    {
        for (j=i+1; j<N; j++)
        if (stu[i].aver > stu[j].aver)
        {
            t = stu[i];
            stu[i] = stu[j];
            stu[j] = t;
        }
    }

    printf("\t学号\t姓名\t性别\t语文\t数学\t英语\t计算机\t平均成绩\n");
    for (i=0; i<N; i++)
    {    
        printf("NO.%d\t",i+1);
        printf("%s\t%s\t%s",stu[i].number,stu[i].name,stu[i].sex);
        for (j=0; j<4; j++)
            printf("\t%d",stu[i].score[j]);
        printf("\t%f\n",stu[i].aver);
    }
    return 0;
}
