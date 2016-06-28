/*************************************************************************
	> File Name: 2.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月23日 星期一 20时06分43秒
 ************************************************************************/

#include<stdio.h>
#define N 10
struct boyscore
{
    int minute;
    int second;
};
struct girlscore
{
    char flexibility;
    int number;
};
struct student
{
    char num[9];
    char name[21];
    char sex;
    union
    {
        struct boyscore bs;
        struct girlscore gs;
    }score;
};
int main(void)
{
    struct student st[N];
    int n,i;
    printf("please input number of students:");
    scanf("%d",&n);
    printf("please input num name sex score:\n");
    for (i=0; i<n; i++)
    {
        printf("No%d.stu is: ",i+1);
        scanf("%s%s%c",st[i].num,st[i].name,&st[i].sex);
        if (st[i].sex=='b' || st[i].sex=='B')
            scanf("%d%d",&st[i].score.bs.minute,&st[i].score.gs.number);
        else if (st[i].sex=='g' || st[i].sex=='G')
            scanf("%c%d",&st[i].score.gs.flexibility,&st[i].score.gs.number);
        else 
            printf("input error !");
    }
    printf("\nthe information is :\n");
    for (i=0; i<n; i++)
    {
        printf("%-8s %s\t",st[i].name,st[i].sex);
        if (st[i].sex == 'b' || st[i].sex == 'B')
            printf("%d:%d\n",st[i].score.bs.minute,st[i].score.bs.second);
        else
        printf("%c and %d\n",st[i].score.gs.flexibility,st[i].score.gs.number);
    }
    return 0;
}
