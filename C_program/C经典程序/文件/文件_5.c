/*************************************************************************
	> File Name: 文件_5.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月03日 星期五 16时10分37秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int i, j, count, count1;
    char string[160] = "",t,ch;
    fp = fopen("string1.txt", "r");
    if (fp == NULL)
    {
        printf("不能打开文件string1!\n");
        exit(1);
    }
    printf("读取到文件string1的内容为:\n");
    for (i=0; (ch=fgetc(fp)) != EOF; i++)
    {
        string[i] = ch;
        putchar(string[i]);
    }
    fclose(fp);
    count1 = i;     //记录连接数组2的位置
    fp = fopen("string2.txt", "r");
    if (fp == NULL)
    {
        printf("不能打开文件string2!\n");
        exit(1);
    }
    printf("\n读取到文件string2的内容为:\n");
    for (i=count1; (ch=fgetc(fp)) != EOF; i++)
    {
        string[i] = ch;
        putchar(string[i]);
    }
    fclose(fp);
    count = i;  //记录数组string的长度
    //选择法对数组内容进行排序
    for (i=0; i<count-1; i++)
        for (j=i+1; j<count; j++)
            if (string[i] > string[j])
            {
                t = string[i];
                string[i] = string[j];
                string[j] = t;
            }
    printf("\n排序后数组string的内容为:\n");
    printf("%s\n",string);
    fp = fopen("string.txt","w");
    fputs(string,fp);   //将数组string的内容写到fp所指的文件中
    printf("已将该内容写入文件string.txt中!\n");
    fclose(fp);

    return 0;
}
