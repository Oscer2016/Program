/*************************************************************************
	> File Name: 文件_2.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月03日 星期五 14时23分20秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
//#include <io.h>
#define LEN 100
int main(void)
{
    FILE *fp;
    char filename[LEN];
    int fno,fsize;
    char ch;
    printf("请输入要打开文件的完整路径及文件名:");
    gets(filename);
    fp = fopen(filename,"rt");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        exit(1);
    }
    /*
    fno = fileno(fp);
    fsize = filelength(fno);
    printf("\n%s文件打开!\n",filename);
    printf("\n文件大小 %d Bytes\n",fsize);
    */
    printf("\n文件内容为:\n");
    while ((ch=fgetc(fp)) != EOF)
        printf("%c",ch);
    fclose(fp);
    printf("\n\n");

    return 0;
}
