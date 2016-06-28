/*************************************************************************
	> File Name: 1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月26日 星期四 17时37分00秒
 ************************************************************************/

#include <stdio.h>

typedef struct person   //结构体类型的定义
{
    int num;
    char name[21];
    int s[3];
    float aver;
}PERSON;

void Input(PERSON *p)   //用指向结构体的指针变量作形参
{
    scanf("%d%s%d%d%d",&p->num,p->name,&p->s[0],&p->s[1],&p->s[2]);
    p->aver=(p->s[0] + p->s[1] + p->s[2]) / 3.0;
}
int main(void)
{
    PERSON st;
    printf("please input the information:\n");
    Input(&st);     //实现引用传递
    printf("\nthe information is:\n");
    printf("%d\t%s\t%d %d %d %5.2f\n",st.num,st.name,st.s[0],st.s[1],st.s[2],st.aver);

    return 0;
}
