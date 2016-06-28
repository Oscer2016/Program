/*************************************************************************
	> File Name: 1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月03日 星期五 10时29分01秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100

int main(void)
{
    FILE *fp;
    char filename[LEN];
    int fno,fsize;
    printf("请输入要打开文件的完整路径及文件名:");
    gets(filename);
    fp = fopen(filename,"r");
    if (fp == NULL)
    {
        printf("\n打开文件失败\n");
        exit(1);
    }
    fno = fileno(fp);
    fsize = filelength(fno);
    printf("\n%s 文件打开成功,文件大小 %d Bytes\n",filename,fsize);
    fclose(fp);
    return 0;
}
