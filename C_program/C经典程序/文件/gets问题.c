/*************************************************************************
	> File Name: t.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月03日 星期五 14时47分26秒
 ************************************************************************/

#include <stdio.h>
int main (void)
{
    char crack8[20];

    printf("\n 输入任意字符 ： ");

    fgets(crack8, 20, stdin);//stdin 意思是键盘输入

    fputs(crack8, stdout); //stdout 输出

    return 0;
}
