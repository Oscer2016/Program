/*************************************************************************
	> File Name: 文件_12.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月07日 星期二 19时48分29秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3

typedef struct song
{
    char sname[40];     //歌名
    char pname[30];     //演唱者
}REC;

int main(void)
{
    REC song[N],t;
    int i,m,n;
    char ch;
    FILE *fsource,*farget;
    fsource = fopen("song.txt", "w+");
    farget = fopen("Newsong.txt", "w");
    if (fsource == NULL || farget == NULL)
    {
        printf("打开文件出错!\n");
        exit(1);
    }
    for (i=0; i<N; i++)
    {
        printf("\n第 %d 首歌的信息:\n",i+1);
        printf("\n歌名:");
        gets(song[i].sname);
        printf("\n演唱者:");
        gets(song[i].pname);
        fwrite(&song[i],sizeof(REC),1,fsource);
        fputc('\n',fsource);    //写一个回车换行
    }
    rewind(fsource);            //回到文件开始
    while (fread(&t,sizeof(REC),1,fsource) != NULL)
    {
        fgetc(fsource);                 //读完回车换行
        m = strlen(t.sname);            //歌名实际长度
        n = strlen(t.pname);            //演唱者实际长度
        fprintf(farget,"%d",m);         //向文件中写歌名长度
        fprintf(farget,"%d",n);         //向文件中写演唱者长度
        fwrite(&t.sname,m,1,farget);    //向文件中写歌名
        fwrite(&t.pname,n,1,farget);    //向文件中写演唱者
        fputc('\n',farget);             //写一个回车换行
    }
    fclose(fsource);
    fclose(farget);

    return 0;
}
