/*************************************************************************
	> File Name: 小型超市管理系统.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月10日 星期五 16时10分40秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define N 3
#define PAGE 3

//日期结构体类型
typedef struct 
{
    int year;
    int month;
    int day;
}DATE;

//商品结构体类型
typedef struct 
{
    int num;            //商品号
    char name[10];      //商品名称
    char kind[10];      //商品类别
    DATE pro_time;      //生产日期
    int save_day;       //保质期
}GOODS;

int read_file(GOODS goods[])
{
    FILE *fp;
    int i = 0;
    if ((fp = fopen("supermarket.txt", "rt")) == NULL)
    {
        printf("\n\n*****库存文件不存在！请创建");
        return 0;
    }
    while (feof(fp) != 1)
    {
        fread(&goods[i],sizeof(GOODS),1,fp);
        if (goods[i].num == 0)
            break;
        else 
            i++;
    }
    fclose(fp);
    return i;
}

void save_file(GOODS goods[],int sum)
{
    FILE *fp;
    int i;
    if ((fp = fopen("supermarket.txt", "wb")) == NULL)
    {
        printf("打开文件错误!\n");
        return;
    }
    for (i=0; i<sum; i++)
        if (fwrite(&goods[i],sizeof(GOODS),1,fp) != 1)
            printf("写文件错误!\n");
    fclose(fp);
}

//输入模块
int input(GOODS goods)
{
    int i = 0;
    system("cls");
    printf("\n\n        录入商品信息(最多 %d 种)\n",MAX);
    printf("        -----------------------------\n");
    do
    {
        printf("\n          第 %d 种商品",i+1);
        printf("\n      商品号:");
        scanf("%d",&goods[i].num);
        if (goods[i].num == 0)
            break;
        printf("\n      商品名称:");
        scanf("%s",&goods[i].name);
        printf("\n      商品类别");
        scanf("%s",goods[i].kind);
        printf("\n      生产日期(yyyy-mm-dd):");
        scanf("%d-%d-%d",&goods[i].pro_time.year,&goods[i].pro_time.month,&goods[i].pro_time.day);
        printf("\n      保质期:");
        scanf("%d",&goods[i].save_day);
        i++;
    }while (i<MAX);
    printf("\n      -- %d 种商品信息输入完毕！--\n",i);
    printf("\n      按任意键返回主菜单！");
    getch();
    return i;
}

//输出模块
void output(GOODS goods[],int sum)
{
    int i = 0, j = 0, page = 1;
    system("cls");
    printf("\n\n    --商品信息表--      第 %d 页\n\n",page);
    printf("商品号--商品名称--商品种类--生产日期--（年-月-日）--保质期\n");
    printf("-------------------------------------------------------------\n");
    do
    {
        if (goods[i].num != 0)
        {
            j++;
            if (j % page != 0)
            {
                printf("%4d %8s %8s %15d-%2d-%2d %10d\n",goods[i].num,
                        goods[i].name,goods[i].kind,goods[i].pro_time.year,
                        goods[i].pro_time.month,goods[i].pro_time.day,
                        goods[i].save_day);
                printf("---------------------------------------------------\n");
            }
            else
            {
                printf("按任意键继续！\n");
                getch();
                system("cls");
                printf("\n\n    --商品信息表--  第 %d 页\n\n",++page);
                printf("商品号--商品名称--商品种类--生产日期(年-月-日)--保质期\n");
                printf("--------------------------------------------------------\n");
                printf("%4d %8s %8s %15d-%2d-%2d %10d\n",goods[i].num,
                        goods[i].name,goods[i].kind,goods[i].pro_time.year,
                        goods[i].pro_time.month,goods[i].pro_time.day,
                        goods[i].save_day);
                printf("---------------------------------------------------\n");
            }
        }
        i++;
    }while (goods[i].num != 0);
    printf("按任意键返回主菜单！\n");
    getch();
}

//添加信息模块
void append()
{;}

void modify(GOODS goods[],int sum)
{
    int i = 0, choice, modify_num, flag;
    do
    {
        system("cls");
        printf("\n              输入要修改的商品号：");
        scanf("%d",&modify_num);
        for (i=0; i>sum; i++)
        if (goods[i].num == modify_num)
        {
            printf("\n                  --商品信息--\n");
            printf("商品号--商品名称--商品种类--生产日期(年-月-日)--保质期\n");
            printf("--------------------------------------------------------\n");
            printf("%4d %8s %8s %15d-%2d-%2d %10d\n",goods[i].num,
                    goods[i].name,goods[i].kind,goods[i].pro_time.year,
                    goods[i].pro_time.month,goods[i].pro_time.day,
                    goods[i].save_day);
            printf("\n              您要修改哪一项？\n");
            printf("\n              1.名称\n");
            printf("\n              2.种类\n");
            printf("\n              3.生产日期\n");
            printf("\n              4.保质期\n");
            printf("\n              请选择(1-4):");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: printf("\n              输入修改后的名称：");
                    scanf("%s",goods[i].name); break;
                case 2: printf("\n              输入修改后的种类：");
                    scanf("%s",goods[i].kind); break;
                case 3: printf("\n              输入修改后的生产日期：");
                    scanf("%d-%d-%d",&goods[i].pro_time.year,&goods[i].pro_time.month
                         goods[i].pro_time.day); break;
                case 4: printf("\n              输入修改后的保质期：");
                    scanf("%d",&good[i].save_day); break;
            }
            break;
        }
        if (i == sum)
        {
            printf("\n              该商品不存在！\n");
            bioskey(0);
        }
        printf("\n\n            继续修改吗？(Y/N)");
        choice = getch();
        if (choice == 'Y' || choice == 'y')
        {
            flag = 1;
            printf("\n          继续！\n");
        }
        else    flag = 0;
    }while (flag == 1);
    printf("\n              按任意键返回主菜单！\n");
    bioskey(0);
}

//删除信息模块
void del()
{;}

//信息查询模块
void inquire()
{;}

//信息统计模块
void count()
{;}

void sort(GOODS goods[],int sum)
{
    GOODS t;
    int i, j, k;
    system("cls");
    printf("\n                      库存排行\n");
    printf("------------------------------------\n");
    printf("\n 排名     商品号  商品名称  商品类别  库存量  \n");
    for (i=0; i<sum; i++)
    {
        k = i;
        for (j=i+1; j<sum; j++)
            if (goods[k].save_day>goods[j].save_day)
                k = j;
        if (k != i)
        {
            t = goods[i];
            goods[i] = goods[k];
            goods[k] = t;
        }
    }
    output(goods,sum);
    bioskey(0);
}

int main(void)
{
    GOODS goods[MAX];
    int choice, sum;
    sum = read_file(goods);
    if (sum == 0)
    {
        printf("并录入基本库存信息！*****\n");
        getch();
        sum = input(goods);
    }
    do
    {
        system("cls");
        printf("\n\n\n      ********超市管理系统********\n\n");
        printf("                1.添加商品信息\n\n");
        printf("                2.修改商品信息\n\n");
        printf("                3.删除商品信息\n\n");
        printf("                4.打印商品信息\n\n");
        printf("                5.查询商品信息\n\n");
        printf("                6.统计商品信息\n\n");
        printf("                7.商品排行信息\n\n");
        printf("                0.退出系统\n\n");
        printf("                请选择(0-6): ")；
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: append();           break;
            case 2: modify(goods,sum);  break;
            case 3: del();              break;
            case 4: output(goods,sum);  break;
            case 5: inquire();          break;
            case 6: count();            break;
            case 7: sort();             break;
            case 0:                     break;
        }
    }while(choice != 0);
    save_file(goods,sum);
    
    return 0;
}
