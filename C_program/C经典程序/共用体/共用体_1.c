/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月23日 星期一 16时39分29秒
 ************************************************************************/

#include<stdio.h>

union int_char
{
    char ch[2];
    int i;
};

void OutPut(union int_char x)
{
    printf("i=%d\ti=%X\n",x.i,x.i);
    printf("ch0=%X,ch1=%X\n",x.ch[0],x.ch[1]);
    printf("ch0=%c,ch1=%c\n",x.ch[0],x.ch[1]);
}

int main(void)
{
    union int_char x;
    x.i = 19788;
    OutPut(x);
}
