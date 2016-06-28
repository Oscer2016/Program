/*************************************************************************
	> File Name: 文件_9.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月04日 星期六 14时30分41秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct stu
{
    char num[20];
    char name[40];
    char sex[5];
}q;

int main(void)
{
    FILE *fp;
    int i = 1;
    printf("\n输入该班数据:\n");
    fp = fopen("class_list.txt", "r");
    if (fp == NULL)
    {
        printf("不能打开此文件!\n");
        exit(1);
    }
    fseek(fp,i*sizeof(struct stu),0);
    fread(&q,sizeof(struct stu),1,fp);
    printf("\n该班第二个学生的信息为:\n");
    printf("\n\n学号\t姓名\t性别\n");
    printf("%s\t%s\t%s\n",q.num,q.name,q.sex);
    
    return 0;
}
