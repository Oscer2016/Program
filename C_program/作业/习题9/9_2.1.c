/*************************************************************************
	> File Name: 9_2.1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月06日 星期一 21时50分26秒
 ************************************************************************/

#include <stdio.h>
struct STU
{
    int num;
    float TotalScore;
};
void f(struct STU p)
{
    struct STU s[2] = {{20044,550},{20045,537}};
    p.num = s[1].num;
    p.TotalScore = s[1].TotalScore;
}
int main(void)
{
    struct STU s[2] = {{20041,703},{20042,580}};
    f(s[0]);
    printf("%d %3.0f\n",s[0].num,s[0].TotalScore);
    return 0;
}
