#include    <stdio.h>
#include    <stdlib.h>
 
#define     MAX_STR_LEN     (1024)
#define     CHARS_TO_COUNT  (128)
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  统计输入的少于1024的小写字符串中出现次数最少的字符并输出；
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char str[MAX_STR_LEN] = {0};
    char min_char = 'a';
    int number_of_char[CHARS_TO_COUNT] = {0};
    int min_num = MAX_STR_LEN;
    int ii = 0;
 
    scanf("%s", str);
    for (ii=0; str[ii]!='\0'; ii++)
    {
        number_of_char[ str[ii] ] ++;
    }
 
    for (ii='a'; ii<='z'; ii++)
    {
        if ((number_of_char[ii] != 0)
            &&(number_of_char[ii] < min_num))
        {
            min_num = number_of_char[ii];
            min_char = ii;
        }
    }
 
    printf("%c\n", min_char);
 
    return EXIT_SUCCESS;
}               /* ----------  end of function main  ---------- */