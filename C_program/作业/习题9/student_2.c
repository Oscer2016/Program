#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3

typedef struct student
{
    char num[9];
    char name[10];
    int score;
}Stu;

void Input(Stu st[])
{
    int i;
	for (i=0; i<N; i++)
	{
		printf("请输入第 %d 个学生的学号,姓名和成绩：\n",i+1);
		scanf("%s%s%d",st[i].num,st[i].name,&st[i].score);
	}  
}

void Sort(Stu st[])
{
    int i,j;
    Stu t;
    for (i=0; i<N-1; i++)
        for (j=i+1; j<N; j++)
            if (st[i].score > st[j].score)
            {
                t = st[i];
                st[i] = st[j];
                st[j] = t;
            }
}

void Find(Stu st[])
{
    int i;
    char s[9];
    printf("请输入要查询的学号:");
    scanf("%s",s);
    printf("\n");
    for (i=0; i<N; i++)
        if (strcmp(st[i].num,s) == 0)
        {
            printf("该学生信息为:\n");
            printf("\t学号\t姓名\t成绩\n");
            printf("NO.%d\t%s\t%s\t%d\n",i+1,st[i].num,st[i].name,st[i].score);
            printf("\n");
            return;
        }
        printf("无该学生信息!\n\n");
}

/*
void Select(Stu st[])
{
0	int i,k;
	Sort(st);
	for (i=0; i<N; i++)
		if (stu[i].score)
}
*/
void Output(Stu st[])
{
    int i;
	printf("\t学号\t姓名\t成绩\n");
	for (i=0; i<N; i++)
		printf("NO.%d\t%s\t%s\t%d\n",i+1,st[i].num,st[i].name,st[i].score);
    printf("\n");
}

void Write(Stu st[])
{
    FILE *fp;
    int i;
    fp = fopen("student.txt","w");
    for (i=0; i<N; i++)
        fwrite(&st[i],sizeof(struct student),1,fp);
    //fwrite(st,sizeof(Stu),N,fp);
    fclose(fp);
}

void Read(Stu st[])
{
    FILE *fp;
    fp = fopen("student.txt","r");
    if (fp == NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    int i = 0;
	printf("\t学号\t姓名\t成绩\n");
    while (fread(&st[i],sizeof(struct student),1,fp) != NULL)
    {
        printf("NO.%d\t%s\t%s\t%d\n",i+1,st[i].num,st[i].name,st[i].score);
        i++;
    }
    //fread(st,sizeof(Stu),N,fp);
    fclose(fp);
    printf("\n");
}

int main(void)
{
    Stu st[N];
    
    Input(st);
    Sort(st);
    Output(st);
    Find(st);
    Write(st);
	Read(st);
	
    return 0;
}
