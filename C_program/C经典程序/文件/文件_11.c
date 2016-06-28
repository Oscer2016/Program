/*************************************************************************
	> File Name: 文件_11.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月06日 星期一 19时53分18秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char name[10];
    int num;
    int age;
    char addr[15];
    struct Node *next;
};

//尾插法建立带头结点的单链表
struct Node *creat_inf()
{
    struct Node *head,*r,*stu;
    int i = 0;
    char choice;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->next = NULL;
    r = head;
    do 
    {
        stu = (struct Node *)malloc(sizeof(struct Node));
        printf("\n\n第 %d 个人的信息:\n",++i);
        printf("\n姓名:");
        scanf("%s",stu->name);
        printf("\n学号:");
        scanf("%d",&stu->num);
        printf("\n年龄:");
        scanf("%d",&stu->age);
        printf("\n住址:");
        scanf("%s",stu->addr);
        r->next = stu;      //尾插新结点
        r = stu;            //指向尾结点
        printf("Continue?(Y/N)");
        choice = getchar();
        scanf("%c",&choice);
    }while (choice == 'Y' || choice == 'y');
    r->next = NULL;
    return head;
}

//将链表中的信息保存到指定的磁盘文件中
int save_inf(struct Node *h)
{
    struct Node *stu;
    FILE *fp;
    char filename[40];
    printf("\n请输入要保存的文件名:");
    scanf("%s",filename);
    if ((fp = fopen(filename,"w")) == NULL)
    {
        printf("写文件出错!\n");
        exit(1);
    }
    for (stu=h->next; stu!=NULL; stu=stu->next)
        fprintf(fp,"%s\t%d\t%d\t%s\n",stu->name,stu->num,stu->age,stu->addr);
    printf("\n文件已成功保存！\n");
    fclose(fp);
}

//从指定的磁盘文件中读取信息并存入单链表
struct Node *read_inf()
{
    struct Node *head,*r,*stu;
    FILE *fp;
    char filename[40];
    printf("\n请输入要打开的文件名:");
    scanf("%s",filename);
    if ((fp = fopen(filename,"r")) == NULL)
    {
        printf("读文件出错！\n");
        exit(1);
    }
    head = (struct Node *)malloc(sizeof(struct Node));
    head->next = NULL;
    r = head;
    while (!feof(fp))   //文件结束
    {
        //开辟空间，以存放读取的信息
        stu = (struct Node *)malloc(sizeof(struct Node));
        //存放读取信息
        fscanf(fp,"%s%d%d%s",stu->name,&stu->num,&stu->age,stu->addr);
        r->next = stu;  //链接结点
        r = stu;
    }
    r->next = NULL;
    fclose(fp);
    printf("\n文件信息已正确读出!\n");
    return head;
}

//将链表中的信息打印输出
int print_inf(struct Node *h)
{
    struct Node *stu;
    printf("\n该班数据为:\n");
    printf("姓名\t学号\t年龄\t住址\n");
    for (stu=h->next; stu->next!=NULL; stu=stu->next)
    printf("%s\t%d\t%d\t%s\n",stu->name,stu->num,stu->age,stu->addr);
}

int main(void)
{
    struct Node *head;
    head = creat_inf();     //创建基本信息单链表
    save_inf(head);         //保存基本信息到指定文件
    head = read_inf();      //从指定文件中读取信息
    print_inf(head);        //打印显示单链表的基本信息
    return 0;
}
