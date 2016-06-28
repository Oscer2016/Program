/*************************************************************************
	> File Name: 9_2.3.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月06日 星期一 22时09分23秒
 ************************************************************************/

#include <stdio.h>
union int_st
{
    short int k;
    char ch[2];
};

int main(void)
{
    union int_st x;
    
    x.ch[0] = 'M';
    x.ch[1] = 'n';
    printf("k=%d\nk=%X\n",x.k,x.k);
    
    return 0;
}
