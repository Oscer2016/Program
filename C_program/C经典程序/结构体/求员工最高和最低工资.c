/*************************************************************************
	> File Name: 1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月25日 星期三 20时46分46秒
 ************************************************************************/
#include <stdio.h>
struct
personnel
{
    char name[20];
    char sex[10];
    int age;
    double salary;
};
void input(struct personnel pers[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" 请依次输入员工的姓名,性别,年龄,月薪 :");
        scanf("%s%s%d%lf",pers[i].name,pers[i].sex,&pers[i].age,&pers[i].salary);
    }
    return;
}
struct personnel find_max(struct personnel pers[],int n)
{
    int i,index=0;
    double tmp;
    tmp = pers[0].salary;
    for(i=1;i<n;i++)
        if(pers[i].salary>tmp)
        {
            index=i;
            tmp=pers[i].salary;
        }
    return pers[index];
}
struct personnel find_min(struct personnel pers[],int n)
{
    int i,index;
    double tmp;
    index=0;
    tmp = pers[0].salary;
    for(i=1;i<n;i++)
        if(pers[i].salary<tmp)
        {
            index=i;
            tmp=pers[i].salary;

        }
    return pers[index];
}
void print(struct personnel pers)
{
    printf(" 员工姓名 :%s\t 性别 :%s\t 年龄 :%d\t 月薪 :%6.2f\n",pers.name,pers.sex,pers.age,pers.salary);
    return ;
}
int main(void)
{
    struct personnel pers[4],pers_max,pers_min;
    input(pers,4);
    pers_max=find_max(pers,4);
    printf("\n 工资最高的员工信息 \n");
    print(pers_max);
    pers_min=find_min(pers,4);
    printf("\n 工资最低的员工信息 \n");
    print(pers_min);
 
    return 0;
}
