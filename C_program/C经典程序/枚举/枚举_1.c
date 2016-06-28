/*************************************************************************
	> File Name: 1.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月25日 星期三 22时09分55秒
 ************************************************************************/

#include <stdio.h>
enum color {red,yellow,white,blue,black};   //定义枚举类型color
int main(void)
{
    enum color b[3];
    int i,count = 0;
    for (b[0]=red; b[0]<=black; b[0]++)
        for (b[1]=red; b[1]<=black; b[1]++)
            for (b[2]=red; b[2]<=black; b[2]++)
                if (b[0] != b[1] && b[0] != b[2] && b[1] != b[2])   //3种球颜色不相同
                {
                    count++;
                    printf("No.%-2d ",count);
                    for (i=0; i<3; i++)
                    {
                        switch (b[i])   //根据不同情况,输出球的颜色
                        {
                        case red: printf("红"); break;
                        case yellow: printf("黄"); break;
                        case white: printf("白"); break;
                        case blue: printf("蓝"); break;
                        case black: printf("黑"); break;
                        }
                    }
                    if (count%5==0)     //每行输出5种情况
                        printf("\n");
                    else
                        printf("\t");
                }
    return 0;
}
