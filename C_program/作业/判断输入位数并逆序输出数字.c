/*
	����һ��������5λ��������Ҫ��: 
	1��������Ǽ�λ�� 
	2���ֱ����ÿһλ����
	3�������������λ���֣�����ԭ��Ϊ321,Ӧ���123
	����
	һ��������5λ������
	���
	����: 
	��һ�� λ�� 
	�ڶ��� �ÿո�ֿ���ÿ�����֣�ע�����һ�����ֺ�û�пո� 
	������ ��������������
	��������

	12345

	�������

	5
	1 2 3 4 5
	54321
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, k, s=0;
	char str[6];
	
	scanf("%s",str);
	k=strlen(str);
	printf("%d\n",k);
	for (i=0; i<k; i++)
	{
		printf("%c",str[i]);
		if (i != k-1)
			printf(" "); 
	}
	printf("\n");
	for (i=k-1; i>=0; i--)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}