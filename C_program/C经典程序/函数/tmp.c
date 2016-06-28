/*************************************************************************
	> File Name: tmp.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月03日 星期五 10时33分10秒
 ************************************************************************/

#include <stdio.h>

void GetM(int a,int b,int *max,int *min)
{
    *max = a > b ? a : b;
    *min = a > b ? b : a;
}

int main(void)
{
    int a = 8, b = 6, max, min;
    GetM(a,b,&max,&min);
    printf("%d %d\n",max,min);
    return 0;
}
