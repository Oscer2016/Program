#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, j, m, linenum;
	printf("������m:");
	scanf("%d",&m);
	srand((unsigned)time(NULL));	//����ʱ�亯���������������������
	for (i=1; i<=m; i++)
	{
		linenum = rand()%10 + 1;	//����õ�ÿ���Ǻŵĸ�����1~10��
		for (j=1; j<=linenum; j++)	//��������е��Ǻ�
			printf("*");
		printf("\n");
	}
	return 0;
}