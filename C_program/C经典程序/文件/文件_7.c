/*************************************************************************
	> File Name: 文件_7.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月04日 星期六 08时55分33秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define N 3

struct stu
{
    char num[20];
    char name[40];
    char sex[5];
}class[N];

int main(void)
{
    FILE *fp;
    int i;
    printf("\n输入该班的数据:\n");
    fp = fopen("class_list.txt", "w");
    if (fp == NULL)
    {
        printf("不能打开此文件!\n");
        exit(1);
    }
    for (i=0; i<N; i++)
    {
        printf("\n第 %d 个人的信息\n",i+1);
        printf("\n学号:");
        gets(class[i].num);
        printf("\n姓名:");
        gets(class[i].name);
        printf("\n性别:");
        gets(class[i].sex);
        fwrite(&class[i],sizeof(struct stu),1,fp);
    }
    fclose(fp);
    printf("\n");
    fp = fopen("class_list.txt", "r");
    printf("该班数据为:\n");
    printf("学号\t姓名\t性别\n");
    i = 0;
    while (fread(&class[i],sizeof(struct stu),1,fp) != NULL)
    {
        printf("%s\t%s\t%s\n",class[i].num,class[i].name,class[i].sex);
        i++;
    }
    fclose(fp);

    return 0;
}
