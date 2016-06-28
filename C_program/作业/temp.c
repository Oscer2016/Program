/*************************************************************************
	> File Name: temp.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年05月25日 星期三 09时26分16秒
 ************************************************************************/

#include <stdio.h>
int f(int a)
{
    int b = 0;
    static int c = 3;
    a = c++,b++;    //'='优先级高于',',所以先执行a = c++.
    return a;
}
int main(void)
{
    int a,i,t;
    a = 3;
    for (i=0; i<3; i++) 
        t = f(a++);
    printf("%d\n",t);
    return 0;
}
