/*************************************************************************
	> File Name: 3.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月07日 星期二 09时16分29秒
 ************************************************************************/
 
#include <stdio.h>
int str(char *s)
{
    if (*s == '\0')
        return 0;
    else 
        return str(s+1)+1;
}
int main(void)
{
    char s[15] = "helloworld";
    printf("%d\n",str(s));
    return 0;
}
