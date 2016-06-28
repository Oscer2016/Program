/*************************************************************************
	> File Name: 1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月26日 星期四 20时07分14秒
 ************************************************************************/

#include <stdio.h>
#define N 3
#define M 4

struct stu
{
    char num[8];
    char name[10];
    int score[M];
};
void ave_stu(struct stu s[],float s_ave[])  //求每个学生的平均分
{
    int i,j;
    float sum;
    for (i=0; i<N; i++)
    {
        for (sum=0,j=0; j<M; j++)
            sum += s[i].score[i];
        s_ave[i] = sum/M;
    }
}
void ave_course(struct stu s[],float c_ave[])   //求每门课的平均分
{
    int i,j;
    float sum;
    for (j=0; j<M; j++)
    {
        for (sum=0,i=0; i<N; i++)
            sum += s[i].score[j];
        c_ave[j] = sum/N;
    }
}
int main(void)
{
    struct stu s[N];
    float s_ave[N],c_ave[M];
    int i,j;
    printf("Enter date of %d students %d course:\n",N,M);
    for (i=0; i<N; i++)
    {
        scanf("%s",s[i].num);
        scanf("%s",s[i].name);
        for (j=0; j<M; j++)
            scanf("%d",&s[i].score[j]);
    }
    ave_stu(s,s_ave);   //调用函数求每个学生的平均分
    ave_course(s,c_ave);    //调用函数求每个学生的平均分
    printf("NO\tName\tcourse1\tcourse2\tcourse3\tcourse4\taverage\n");
    //输出学生成绩表
    for (i=0; i<N; i++)
    {
        printf("%s\t",s[i].num);
        printf("%s\t",s[i].name);
        for (j=0; j<M; j++)
            printf("%-8d",s[i].score[j]);
        printf("%-8.1f\n",s_ave[i]);
    }
    //输出每门课的平均分
    printf("average\t\t");
    for (j=0; j<M; j++)
        printf("%-8.1f",c_ave[j]);
    printf("\n");

    return 0;
}
