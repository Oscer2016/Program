/*************************************************************************
	> File Name: 3.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月07日 星期二 09时16分29秒
 ************************************************************************/
 
#include <stdio.h>
int str(char *s)
{
    static int t = 0;
    if (*s == '\0')
        return t;
    else 
    {
        t++;
        return str(s+1);
    }
}
int main(void)
{
    char s[15] = "helloworld";
    printf("%d\n",str(s));
    return 0;
}
