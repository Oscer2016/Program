/*************************************************************************
	> File Name: 9_2.2.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月06日 星期一 21时57分34秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

struct STU
{
    char name[10];
    int num;
};

void f1(char *name,int num)
{
    struct STU s[2] = {{"SunDan",20044},{"PengHua",20045}};
    num = s[0].num;
    strcpy(name,s[0].name);
}

void f2(struct STU *q)
{
    struct STU s[2] = {{"SunDan",20044},{"PengHua",20045}};
    q->num = s[0].num;
    strcpy(q->name,s[0].name);
}
int main(void)
{
    struct STU s[2] = {{"YangSan",20041},{"LiSiGuo",20042}},*p;
    p = &s[1];
    f1(p->name,p->num);
    f2(&s[0]);
    printf("%s %d\n",p->name,p->num);
    printf("%s %d\n",s[0].name,s[0].num);

    return 0;
}
