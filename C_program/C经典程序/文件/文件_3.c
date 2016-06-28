/*************************************************************************
	> File Name: 文件_3.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月03日 星期五 14时56分02秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
//#include <io.h>
#define LEN 100

int main(void)
{
    FILE *fp;
    char filename[LEN], data[LEN];
    int fno, fsize, i;
    char ch;
    printf("写文件程序...\n");
    printf("请输入要打开文件的完整路径及文件名:");
    gets(filename);
    fp = fopen(filename, "a+");     //文件以追加方式写
    if (fp == NULL)
    {
        printf("\n打开文件失败\n");
        exit(1);
    }
    /*
    fno = fileno(fp);
    fsize = filelength(fno);
    printf("%s 文件打开!\n",filename);
    printf("\n文件大小 %d Bytes\n");
    */
    printf("\n文件内容为:\n");
    while ((ch=fgetc(fp)) != EOF)
        printf("%c",ch);
    while (1)
    {
        printf("\n\n请问是否添加数据(Y/N):");
        if (toupper(getche()) == 'Y')
        {
            printf("\n\n请输入要添加的数据:");
            gets(data);
            for (i=0; i<strlen(data); i++)
                fputc(data[i],fp);
        }
        else
        {
            fclose(fp);
            break;
        }
    }
    fp = fopen(filename, "rt");
    if (fp == NULL)
    {
        printf("\n\n打开文件失败\n");
        exit(1);
    }
    /*
    fno = fileno(fp);
    fsize = filelength(fno);
    printf("\n\n%s 文件打开!\n",filename);
    printf("\n文件大小 %d Bytes\n",fsize);
    */
    printf("\n文件内容为:\n");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c",ch);
    fclose(fp);
    printf("\n\n");
    return 0;
}
