#include <stdio.h>
#include <ctype.h>	//�ַ�������
#define width 5		//���������ռ�Ŀ��
int main(void)
{
	int ch;					//��һ�������ַ�
	unsigned long spaces;	//�ո�
	unsigned long letters;	//��ĸ
	unsigned long digits;	//����
	unsigned long puncts;	//������
	unsigned long others,total;		//�����ַ����ַ�����

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