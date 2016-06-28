/*************************************************************************
	> File Name: fgets.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月03日 星期五 15时39分29秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main(void)
{
    FILE *fp;
    char str[10];
    fp = fopen("/home/hp/2.c", "r");
    while ((fgets(str,8,fp)) != NULL)
        printf("%s\n",str);
    printf("%lu\n",strlen(str));
    return 0;
}
