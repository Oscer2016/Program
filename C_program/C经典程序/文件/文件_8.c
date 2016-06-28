/*************************************************************************
	> File Name: 文件_8.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月04日 星期六 14时18分03秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch,str[20];
    fp = fopen("string.txt", "a+");     //以追加方式打开文件
    if (fp == NULL)
    {
        printf("不能打开此文件!\n");
        exit(1);
    }
    printf("请输入一个字符串:");
    gets(str);
    fwrite(str,strlen(str),1,fp);
    rewind(fp);     //将文件指针fp重新移回文件首部
    ch = fgetc(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
    
    return 0;
}
