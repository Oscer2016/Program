/*************************************************************************
	> File Name: 2_5.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月05日 星期日 14时17分41秒
 ************************************************************************/

#include <stdio.h>
int main(void)
{
    int i, h, m;

    printf("请输入分钟数:");
    scanf("%d",&i);
    h = i / 60;
    m = i - 60 * h;
    printf("%d 分钟 <=> %d 小时 %d 分钟\n",i,h,m);

    return 0;
}
