#include <stdio.h>
#include <ctype.h>	//字符函数库
#define width 5		//输出数据所占的宽度
int main(void)
{
	int ch;					//下一个输入字符
	unsigned long spaces;	//空格
	unsigned long letters;	//字母
	unsigned long digits;	//数字
	unsigned long puncts;	//标点符号
	unsigned long others,total;		//其他字符和字符总数

	spaces = letters = digits = puncts = others = 0;
	printf("Please input :\n");
	while ((ch=getchar()) != EOF)
	{
		if (isspace(ch))	spaces++;
		else if (isalpha(ch))	letters++;
		else if (isdigit(ch))	digits++;
		else if (ispunct(ch))	puncts++;
		else others++;
	}
	total = spaces + letters + digits + puncts + others;
	printf("Total = %*lu\n",width,total);
	if (total != 0)
	{
		printf("spaces=%*lu\n",width,spaces);
		printf("letters=%*lu\n",width,letters);
		printf("digits=%*lu\n",width,digits);
		printf("puncts=%*lu\n",width,puncts);
		printf("others=%*lu\n",width,others);
	}
	getch();

	return 0;
}